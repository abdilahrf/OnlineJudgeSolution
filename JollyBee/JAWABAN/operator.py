tc = input()

for x in range(int(tc)):
    num = input()
    num = num.split(" ")
    solution = ""

    if solution == "":
        if int(num[0]) + int(num[1]) == int(num[2]):
            solution = "+"
        elif int(num[0]) - int(num[1]) == int(num[2]):
            solution = "-"
        elif int(num[0]) * int(num[1]) == int(num[2]):
            solution = "*"
        elif int(num[0]) / int(num[1]) == int(num[2]):
            solution = "/"
        else:
            solution = "TIDAK ADA SOLUSI"
    print("Kasus #{}: {}".format(x+1,solution))