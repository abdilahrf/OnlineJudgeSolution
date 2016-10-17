tc = input()

for x in range(int(tc)):
    nR = input()
    nR = nR.split(" ")
    maxx = int(nR[1])
    res = 0
    iT = input()
    iT = iT.split()

    for c in iT:
        if int(c) <= maxx and int(c) > int(res):
            res = c

    if res == 0:
        res = "HAPPY BIRTHDAY ANTONIO"

    print("Case #{}: {}".format(x+1,res))
