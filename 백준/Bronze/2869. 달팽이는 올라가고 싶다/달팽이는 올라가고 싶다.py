import sys
input=sys.stdin.readline

a,b,v=map(int,input().split())

cnt=(v-a-1)//(a-b)+2

print(cnt)