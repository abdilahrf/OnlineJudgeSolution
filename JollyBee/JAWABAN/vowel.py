tc = input()
vowel = ("A","I","U","E","O")
for x in range(int(tc)):
    count = 0
    sR = input()
    for z in sR:
        if z.upper() in vowel:
            count +=1
    print("Kasus #{}: {}".format(x+1,count))