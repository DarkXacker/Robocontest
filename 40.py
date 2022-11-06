n,k=map(int,input().split())

s=1

for j in range(n):
    s*=n
if n==2:
    s+=4
n-=1
print(s-k*n)