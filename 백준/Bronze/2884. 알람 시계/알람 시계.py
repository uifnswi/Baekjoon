h,m=map(int,input().split())
t=h*60+m-45
if t//60<0:
    h=t//60+24
else:
    h=t//60
m=t%60
print(h,m)