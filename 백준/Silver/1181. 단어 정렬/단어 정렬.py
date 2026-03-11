n=int(input())
arr=[]
for i in range(n):
    a=input()
    arr.append(a)

temp=0

arr=list(set(arr))
arr.sort()
arr.sort(key=len)
        
for i in arr:
    print(i)