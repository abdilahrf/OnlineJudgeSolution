tc = input()

for x in range(int(tc)):

    mm = input()


    if(int(mm) % 2 != 0):
        res = "CINTA"
    else:
        res = "TIDAK CINTA"

    print("Kasus #{}: {}".format(x+1,res))
