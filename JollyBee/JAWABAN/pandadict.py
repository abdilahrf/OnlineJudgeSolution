import string

tc = input()
pandadict = string.ascii_lowercase
for x in range(int(tc)):
    stor = ""
    sR = input()
    if sR != "":
        count = 0
    for c in sR:
        if c in pandadict:
            if c not in stor:
                stor += c
                count += 1
    print(count)

