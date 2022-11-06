n = int(input())
num = []
m = 0
k = 0
j = 0
for i in range(1,10000):
    num.append(i)

for i in range(n):
    while m <= k:
        print(num[j], end=' ')
        m = m + 1
        j = j + 1
    print()
    k = k + 1
    m = 0