tc = input()

for x in range(int(tc)):
    a = input()
    a = a.split(" ")
    aS = 0
    bS = 0
    for c in a[0]:
        aS += int(c)
    for n in a[1]:
        bS += int(n)

    print("Case #{}: {}".format(x+1,aS*bS))