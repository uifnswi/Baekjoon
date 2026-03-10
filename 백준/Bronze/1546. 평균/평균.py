n=int(input())
arr=list(map(int,input().split()))
t=0
m=max(arr)
for i in arr:
    t+=i/m*100

print(t/n)