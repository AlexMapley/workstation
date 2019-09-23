from math import ceil

def chunk(lst,size):
    return list(
            map(lambda x: lst[x * size:x * size + size],
                list(range(0,ceil(len(lst) / size)))))

print(chunk([1,2,3,4,5],2))
