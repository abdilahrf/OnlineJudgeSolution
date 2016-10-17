tc = input()

for x in range(int(tc)):
    mm = input()
    mm = mm.split(" ")
    a = int(mm[0])
    b = int(mm[1])
    l = int(mm[2])
    if l-2000 > 0:
        l -= 2000
        res = a+(b*l/100)
    else:
        res = a
    print(int(res))