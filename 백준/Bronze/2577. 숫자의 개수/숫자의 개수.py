a=int(input())
b=int(input())
c=int(input())
num=[0]*10
n=str(a*b*c)
for i in n:
    num[int(i)]+=1
for i in range(10):
    print(num[i])