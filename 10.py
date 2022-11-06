n = int(input())
a, b, c = map(int,input().split())

if n < a + b + c:
  print("Yes")
  
else:
  print("No")