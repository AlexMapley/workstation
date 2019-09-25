import os

bob = "bottles of beer"
otw = "on the wall"
take1 = "Take one down, pass it around"
store = "Go to the store and buy some more"

def child(pipeout):
    bottles = 99
    while True:
        if bottles > 0:
            values = (bottles, bob, otw, bottles, bob, take1, bottles -1, bob, otw)
            verse = "%2d %s,\n%d %s.\n%s,\,%2d %s %s." % values
            os.write(pipeout, verse)
            bottles -= 1
        else:
            bottles = 99
            values = (bob, otw, bob, store, bottles, bob, otw)
            verse = "No more %s %s,\nno more %s.\n%s,\n%2d %s %s." % values
            os.write(pipeout,verse)

def parent():
    pipein, pipeout = os.pipe()
    if os.fork() == 0:
        child(pipeout)
    else:
        counter = 1
        while True:
            if counter % 100:
                verse = os.read(pipein, 117)
            else:
                verse = os.read(pipein, 128)
            print ('verse %d\n%s\n') %s (counter, verse)
            counter +=1

parent()

