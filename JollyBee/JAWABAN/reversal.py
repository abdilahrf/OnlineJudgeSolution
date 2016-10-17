tc = input()
num = input()
num = num.split(" ")
res = ""
nolTotal = ""
for x in range(int(tc)+1):
    suk = "0"
    try:
        if num[-x] and x != 0:
            suk = num[-x]
            res += "".join(suk)
            res += " "
    except IndexError:
        nolTotal += suk
        nolTotal += " "
res = nolTotal+res[:-1]
print(res)
