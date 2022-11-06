N=int(input())
if N%400==0 or N%4==0 and N%100!=0:
    if N<10:
         print("12/09/000",N, sep='')
    elif N>10 and N<100:
         print("12/09/00",N, sep='')
    elif N>100 and N<1000:
         print("12/09/0",N, sep='')
    elif N>1000 and N<10000:
         print("12/09/",N, sep='')
else:
    if N<10:
         print("13/09/000",N, sep='')
    elif N>10 and N<100:
         print("13/09/00",N, sep='')
    elif N>100 and N<1000:
         print("13/09/0",N, sep='')
    elif N>1000 and N<10000:
         print("13/09/",N, sep='')