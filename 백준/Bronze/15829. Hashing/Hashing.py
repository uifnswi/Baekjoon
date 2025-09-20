l=int(input())
st=input()
hash=0

for i in range(l):
    v=ord(st[i])-96
    hash+=v*31**i

print(hash%1234567891)