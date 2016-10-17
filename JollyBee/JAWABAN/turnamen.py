tc = input()

for x in range(int(tc)):
    n = input()
    n = int(n)
    nM = input()
    nM = nM.split(" ")
    res = 1
    curr = 0

    for c in range(2**n):
        if int(nM[c]) > int(curr):
            res = c+1
            curr = nM[c]

    print(res)