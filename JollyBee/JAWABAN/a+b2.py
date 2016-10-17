input_string = input()
total=0
input_string = input_string.split(" ")
for x in range(len(input_string)):
	total += int(input_string[x])
	if x==0:
		total = 0
	

print (total)
