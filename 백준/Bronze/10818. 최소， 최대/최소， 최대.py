n=int(input())
num = list(map(int,input().split()))
M=num[0]
m=num[0]
for i in range(1,n):
    if M<num[i]:
        M=num[i]
    if m>num[i]:
        m=num[i]
print(m,M)