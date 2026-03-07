n=[]
a=[]
for _ in range(10):
    num=int(input())
    n.append(num%42)

for i in range(10):
    if n[i] not in a:
        a.append(n[i])

print(len(a))