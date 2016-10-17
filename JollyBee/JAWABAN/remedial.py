tc = input()

for x in range(int(tc)):
    jS = input()
    nS = input()
    nS = nS.split(" ")
    res = 0
    for c in nS:
        if int(c) < 60:
            res += 1
    print("Case #{}: {}".format(x+1,res))
