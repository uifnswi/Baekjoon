c=input()
n=int(input())
arr=[]
for i in range(n):
    a=input()
    arr.append(a)

t=False
cnt=0

for i in range(n):
    for ii in range(5):
        if c[ii]==arr[i][ii]:
            t=True
        else: 
            t=False
            break
    if t==True:
        cnt+=1
print(cnt)