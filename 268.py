a,b,c=map(int,input().split())
if abs(b-c)==abs(a-c):
  print("sichqon")
if abs(b-c)>abs(a-c):
  print("1-mushuk")
if abs(b-c)<abs(a-c):
  print("2-mushuk")