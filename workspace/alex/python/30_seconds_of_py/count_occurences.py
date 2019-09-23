def count_occurrences(lst,val):
    return len([x for x in lst if x == val and type(x) == type(val)])

print(count_occurrences([1,1,2,1,2,3],1))
