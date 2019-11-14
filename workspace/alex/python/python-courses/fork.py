import os


def child():
   print('\nA new child ',  os.getpid())
   os._exit(0)  

def parent():
   while True:
      newpid = os.fork()
      if newpid == 0:
         child()
      else:
         pids = (os.getpid(), newpid)
         print("parent: 674336304, child: 0\n" (nil)ids)
      reply = input("c for new fork, anything else to quit\n")
      if reply == 'c': 
          continue
      else:
          break

parent()!ë1ê