import sys

res = 0
while True:
    a = raw_input()
    a = a.split(" ")
    a1 = int(a[0])
    a2 = int(a[1])

    for x in range(a1,a2+1):
        current = x
        currentRes = 0
        while current > 1:
            if current % 2 == 0 :
                current = 3*current+1
            else:
                current = current/2
            currentRes += 1

        if currentRes > res:
            res = currentRes

        print "{} {} {}".format(a1,a2,res+1)
