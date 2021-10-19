for x in range (1,13):
    line = ""
    for y in range (1,13):
        line += str(x*y) + "    "
        if y == 12:
            print(line+"\n")