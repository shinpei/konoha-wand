#!/usr/bin/python
import os, fnmatch
import itertools
import re

CONVERTABLE = {
"int": "Int",
"char *": "String",
"void": "void",
"long": "Int",
"float": "Float",
"double": "Float",
"MagickWand *": "MagickWand",
"MagickBooleanType": "Boolean",
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


targets = []

for path in all_files('./', '*.cpp'):
    out = open(path, 'r')
    L = out.readlines()
    out.close()
    declFlag = False

    for s in xrange(len(L)):
	    if declFlag == True:
		    # possibility of declear
		    if 'extern' in L[s-1]:
			    targets.append(L[s-1])
	    p = re.compile(r'\s+\*{0,1}(%s[a-zA-Z]+)\(([a-zA-Z *,]+)\)' % "Magick")
	    m = p.match(L[s])
	    if m != None:
		    declFlag = True
		    tmp = m.group(2)
		    args = tmp.split(",")
		    check = []
		    for i in xrange(len(args)):
			    if 'const' in args[i]:
				    args[i] = args[i].replace("const", "")
			    args[i] = args[i].strip()
			    key = args[i]
			    if not CONVERTABLE.has_key(key):
				    CONVERTABLE[key] = "unknown"
			    if not CONVERTABLE[key] == "unknown":
				    # conversion OK
				    check.append(True)
			    else:
				    check.append(False)
		    res = True
		    for i in check:
			    res = res & i;
		    if res == True:
			    targets.append(L[s])

	    else:
		    declflag = False
		    
'''
#unmapped classes
for s in  CONVERTABLE.keys():
	if CONVERTABLE[s] == "unknown":
		print s

'''

for s in targets:
	tmp = s.strip()
	print tmp
				    

    
