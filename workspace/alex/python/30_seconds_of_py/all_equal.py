def all_equal(lst):
    return lst[1:] == lst[:-1]

print(all_equal([1,2,3,4,5,6])) #False
print(all_equal([1,1,1,1])) #True
