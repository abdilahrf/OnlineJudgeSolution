tc = input()

for x in range(int(tc)):
    jC = input()
    vC = input()
    vC = vC.split(" ")
    hasil = 0
    for c in vC:
        if int(c) > 0:
            hasil += int(c)
    print("Kasus #{}: {}".format(x+1,hasil))