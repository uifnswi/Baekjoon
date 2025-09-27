import sys
input=sys.stdin.readline
n=int(input())

s=[]
for i in range(n):
    s.append(int(input().strip()))

s.sort()

for i in s:
    print(i)