## Nuke the entire OS, and break the container
import threading
from queue import Queue
import time
import shutil

print_lock = threading.Lock()

def eat_memory():
    i = 0
    while:
        title = "foo" + ++i
        
        new_days = open(new_path,'w')
        
def process_queue():
    while True:
        file_data = compress_queue.get()
        copy_op(file_data)
        compress_queue.task_done()

compress_queue = Queue()

output_names = [{'v1.mp4' : 'v11.mp4'},{'v2.mp4' : 'v22.mp4'}]

for i in range(2):
    t = threading.Thread(target=process_queue)
    t.daemon = True
    t.start()

start = time.time()

for file_data in output_names:
    compress_queue.put(file_data)

compress_queue.join()

print("Execution time = {0:.5f}".format(time.time() - start))
