def bifurcate(lst, filter):
    return [
            [x for i,x in enumerate(lst) if filter[i] == True],
            [x for i,x in enumerate(lst) if filter[i] == False]
        ]

print(bifurcate(['beep', 'boop', 'foo', 'bar',], [True, True, False, True]))
