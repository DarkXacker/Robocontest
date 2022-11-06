s = input()
s = '0' + s
n = len(s)
c = 0
for i in range(n-1):
    if s[i] == '0' and s[i+1] == '1': c += 1

if c <= 1: print("YES")
else: print("NO")