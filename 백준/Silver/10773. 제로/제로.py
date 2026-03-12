k=int(input())
arr=[]
for i in range(k):
    a=int(input())
    if a==0:
        arr.pop()
    else:
        arr.append(a)
t=0
for i in arr:
    t+=i
print(t)