arr=[]
for i in range(7):
    a=int(input())
    arr.append(a)

b=[]
t=0
for i in arr:
    if i%2!=0:
        b.append(i)
        t+=i
    
if b==[]:
    print(-1)
else:
    print(t)
    print(min(b))