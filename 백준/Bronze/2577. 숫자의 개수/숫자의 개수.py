a=int(input())
b=int(input())
c=int(input())

num=str(a*b*c)

for i in range(10):
    cnt=num.count(str(i))
    print(cnt)