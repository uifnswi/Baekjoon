n=int(input())
count=0
num=list(map(int, input().split()))
for i in num:
    if i==1:continue
    else:
        for ii in range(2,i):
            if i%ii==0:
                break
        else:
            count+=1
print(count)