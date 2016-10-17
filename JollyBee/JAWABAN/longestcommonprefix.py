tc = input()

def cekLongest(data):
    hasil = ""
    nganu2 = "NONE"
    for x in data:
        nganu = ""
        if hasil == "":
            hasil = x
        else:
            for c in range(len(x)):

                try:
                    if x[c] == hasil[c]:
                        nganu += ''.join(x[c])
                except:
                    pass

        if(len(x) < len(hasil)):
            nganu2 = nganu[:len(x)]

    if nganu2 != "NONE":
        return nganu2
    else:
        return nganu

for x in range(int(tc)):
    dor = input()
    listStr = []
    for c in range(int(dor)):
        strM = input()
        listStr.append(strM)
    print("Case #{}: {}".format(x+1,cekLongest(listStr)))
