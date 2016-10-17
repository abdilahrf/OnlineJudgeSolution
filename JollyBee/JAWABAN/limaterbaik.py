tc = input()

for x in range(int(tc)):
    z = input()
    nR = input()
    hs = 0
    nR = nR.split(" ")
    nR = [int(x) for x in nR]
    res = sorted(nR,reverse=True)
    for c in range(5):
        hs += res[c]

    print(hs)