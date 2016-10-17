tc = input()

for x in range(int(tc)):
    res = 0
    day = 0
    mm = input()
    mm = mm.split(" ")
    nD = mm[0]
    pD = mm[1]

    while int(res) < int(nD):
        res += int(pD)
        day += 1

    print("Kasus #{}: {}".format(x+1,day))

