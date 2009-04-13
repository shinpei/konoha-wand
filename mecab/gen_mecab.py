#!/usr/bin/python
import os, fnmatch, sys
import itertools
import re

classname = 'Mecab'

MAPPING = {
"int": "Int",
"char *": "String",
"void": "void",
"long": "Int",
"float": "Float",
"double": "Float",
"mecab_t *": "Mecab",
}

def all_files(root, patterns='*', prefix = "" , yield_path=False):
	patterns = patterns.split(";");
	for path, subdirs, files in os.walk(root):
		files.sort()
		for name in files:
			for pattern in patterns:
				if fnmatch.fnmatch(name, pattern) and not name.startswith('.'):
					yield prefix + os.path.join(path, name)
					break

def anyTrue(predicate, sequence):
    return True in itertools.imap(predicate, sequence)

def endsWith(s, *endings):
    return anyTrue(s.endswith, endings)

#show unmapped classes
def show_unmapped():
	for s in  MAPPING.keys():
		if MAPPING[s] == "unknown":
			print s

# valuables for function interface, returns funcnames(arguments[])
returns = []
funcnames = []
arguments = []

print "class %s;" % classname

for path in all_files('./', '*.cpp'):
    out = open(path, 'r')
    L = out.readlines()
    out.close()
    returntype = ""
    for s in xrange(len(L)):
###
#	    if declFlag == True:
#		    # to get return type of function, roleback 1 line and obtain
#		    if 'extern' in L[s-1]:
#			    line = L[s-1]
#			    line = line.strip()
#			    returntype = line[len('extern '):]
###

	    if 'extern' in L[s] and '%s' % 'mecab' in L[s]:
		    L[s] = L[s].strip()
		    p = re.compile(r'extern\s+([a-zA-Z_]+\s+\*{0,1})\s*(mecab_[a-zA-Z_0-9]+)\(([a-zA-Z *,_]*)\)')
		    m=p.match(L[s])
		    if m != None:
			    check = []
			    args = m.group(3).split(",")
			    returntype = m.group(1)

# args is a array of args
			    for i in xrange(len(args)):
				    args[i] = args[i].replace("const", "")
				    args[i] = args[i].replace("unsigned", "")
				    args[i] = args[i].strip()
				    key = args[i]
				    if not MAPPING.has_key(key):
					    MAPPING[key] = "unknown"
				    if not MAPPING[key] == "unknown":
					    if MAPPING[key] == classname and i > 0:
						    check.append(False)
					    else:
						    # conversion OK
						    check.append(True)
				    else:
					    check.append(False)
			    res = True
			    for i in check:
				    res = res & i;
			    if res == True:
			    # now, proper arguments, targets is ready
				    returns.append(returntype)
				    arguments.append(args)
				    funcnames.append(m.group(2))

print returns, arguments, funcnames



# now, make return type

for s in xrange(len(returns)):
	tmp = funcnames[s]
	#print tmp
	funcnames[s] = funcnames[s].replace('*','')
	funcnames[s] = funcnames[s][0].lower() + funcnames[s][1:]
	if tmp[0] == '*':
		line = returns[s] + " *"
	else:
		line = returns[s]
	line = line.replace("const","")
	line = line.replace("unsigned","")
	line = line.strip()
	key = line
	if MAPPING.has_key(key):
		if MAPPING[key] != "unknown":
			outputline =  MAPPING[key] + " " + classname + "." + funcnames[s] +"("
			ch = []
			for i in xrange(len(arguments[s])):
				arg = MAPPING[arguments[s][i]]
				if arg != "void":
					ch = arg[0].lower() + "%d" % i
					if i == 0:
						if arg == classname:
							outputline = outputline + "self"
						else:
							outputline = outputline + arg + " " + ch
					else:
						outputline = outputline + ", " + arg + " " + ch
			outputline = outputline + ");"

			print outputline

