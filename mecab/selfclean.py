#!/usr/bin/python
import os, sys
classname = 'MagickWand'
input = open(sys.argv[1], 'r')
output = open("out", 'w')
L = input.readlines()
input.close()
newflag = False
for s in xrange(len(L)):
	if 'self' in L[s]:
		line = L[s].replace('self,','')
		if 'self' in line:
			line = line.replace('self','')
		output.writelines(line)
	elif 'newwin' in L[s]:

		line = L[s].replace('//','')
		output.writelines(line)
	else:
		output.writelines(L[s])
output.close()
