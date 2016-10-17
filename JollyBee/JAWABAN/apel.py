case = input()
tampung = list()
for x in range(int(case)):
	temp = 0
	total = 0
	soal = input()
	soal = str(soal)
	soal = soal.split(" ")
	num = [int(x) for x in soal]
#	other
#	for o in range(0,num[1]):
#		temp = temp + num[0]
#	tampung.append(temp)
	tampung.append(num[0]*num[1])

count = 1
for a in tampung:
	print ("Kasus #{}: {}".format(count,a))
	count += 1