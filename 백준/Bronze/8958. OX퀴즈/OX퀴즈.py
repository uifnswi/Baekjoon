t=int(input())
for _ in range(t):
    cnt=0
    s=input()
    count=0
    for i in s:
        if i=='O':
            cnt+=1
        else:
            cnt=0
        count+=cnt
    print(count)
