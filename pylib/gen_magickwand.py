#!/usr/bin/python
import os, fnmatch
import itertools
import re

def all_files(root, patterns='*', prefix = "" , yield_path=False):
	patterns = patterns.split(";");
	for path, subdirs, files in os.walk(root):
		if yield_path:
			yield "libkonoha_la_includedir = $(includedir)/" + path
			
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


for path in all_files('./', '*.h'):
    out = open(path, 'r')
    L = out.readlines()
    out.close()
    for s in xrange(len(L)):
        if L[s] != '\n' and ((L[s].startswith("//") is False) and (L[s].startswith('#') is False)):
            print L[s]
    
