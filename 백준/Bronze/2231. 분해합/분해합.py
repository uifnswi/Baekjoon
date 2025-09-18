n=int(input())

a=0
sum=0
for i in range(1,n):
    j=i
    sum=i
    while j>0:
        sum+=j%10
        j=j//10
    if sum==n:
        print(i)
        a=1
        break
if a==0:
    print(0)