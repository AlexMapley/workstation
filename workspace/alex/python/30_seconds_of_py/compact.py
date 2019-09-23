def compact(lst):
    return list(filter(bool,lst))

print(compact([0,1,False,True,2,'',3,'a','s',34]))
