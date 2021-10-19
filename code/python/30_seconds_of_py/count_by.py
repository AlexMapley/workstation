def count_by(arr, fn=lambda x: x):
    key = {}
    for el in map(fn, arr):
        key[el] = 1 if el not in key else key[el] + 1
    return key

from math import floor

print(count_by([6.1,4.2,6.3], floor))
print(count_by(['one', 'two', 'three'], len))

