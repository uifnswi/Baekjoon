n=int(input())
arr=[input() for _ in range(n)]
s=list(arr[0])

for i in range(1,n):
    for ii in range(len(s)):
        if s[ii]==(arr[i])[ii]:
            continue
        elif s[ii]=="?":
            continue
        else: s[ii]="?"
for i in s:
    print(i ,end='')