tc = input()

def getStorage(data):
    hasil = ""
    if data <= 16000:
        hasil = "16GB"
    elif data <= 32000:
        hasil = "32GB"
    elif data <= 64000:
        hasil = "64GB"
    elif data <= 128000:
        hasil = "128GB"

    return hasil

for x in range(int(tc)):
    aN = input()
    size = 0
    for c in range(int(aN)):
        aPP = input()
        size += int(aPP)

    print("Case #{}: {}".format(x+1,getStorage(size)))