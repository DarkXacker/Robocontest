numbers = input().split()
s = int(input())
n=0

for i in numbers:
  i = int(i)  
  n += i


if s >= n:
  print(s-n)

else:
  print(0)