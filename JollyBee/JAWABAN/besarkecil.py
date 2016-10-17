tc = input()

for x in range(int(tc)):
    iR = input()
    if iR != "":
        msg = ""
    for x in range(len(iR)+1):
        if x % 2 !=0 and x != 0:
            msg += str(iR[x-1]).upper()
        elif x != 0:
            msg += str(iR[x-1]).lower()
    iR = ""
    print(msg)