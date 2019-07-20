#!/usr/bin/python
import sys

print("\n", sys.version)

## modify print to stdout to add a custom prepend
def my_display(x):
    print ("#>#> ")
    print(x)
sys.displayhook = my_display

for i in range(len(sys.argv)):
    if i == 0:
        print("Function name: %s" % sys.argv[0])
    else:
        print("%d. argument: %s" % (i,sys.argv[i]))


## Enumerta data streams
for i in (sys.stdin, sys.stdout, sys.stderr):
    print(i)