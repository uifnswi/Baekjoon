h,m=map(int,input().split())
a=h*60+m-45
h=a//60
m=a%60
if h<0:
    h+=24
print(h,m)
