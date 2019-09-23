def all_unique(lst):
    return len(lst) == len(set(lst))

x = [1,2,3,4,5,6]
y = [1,2,2,3,4,5]
print(all_unique(x))
print(all_unique(y))
