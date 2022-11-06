x = int(input())
j = x - (((x % 100) + 100) // 2)
i = x - ((x % 100) // 2)

if i != j:
	if i < j:
		print(i, j)

	else:
		print(j, i)

else:
	print(i)