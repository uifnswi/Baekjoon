n=int(input())
arr=list(map(int, input().split()))
t,p=(map(int,input().split()))

count=0

for i in range(6):
    if arr[i]==0:
        count+=0
    elif arr[i]%t==0:
        count+=arr[i]//t
    else:
        count+=arr[i]//t+1

print(count)
print(n//p, n%p)