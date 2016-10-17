tc = input()

for x in range(int(tc)):
    res = 0
    pS = input()
    bT = input()
    sB = input()

    bT = bT.split(" ")
    for c in bT:
        if c == sB:
            res += 1
    if(res != 0):
        print("Kasus #{}: ADA {} BOTOL DITEMUKAN".format(x+1,res))
    else:
        print("Kasus #{}: TIDAK ADA".format(x+1))