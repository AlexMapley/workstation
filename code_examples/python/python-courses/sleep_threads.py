import time
from threading import Thread

def sleeper(i):
    print("thread %d sleeps for %d seconds" % (i, i))
    time.sleep(i)
    print("thread %d woke up" % i)

for i in range(10):
    t = Thread(target=sleeper, args=(i+1,))
    t.start()