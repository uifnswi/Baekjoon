import sys
n=int(sys.stdin.readline())
li=[]
for i in range(n):
    [x,y]=map(int,input().split())
    li.append([x,y])
li.sort()
for i in li:
    print(i[0], i[1])