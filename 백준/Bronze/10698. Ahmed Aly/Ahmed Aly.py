t=int(input())
for i in range(1,t+1):
    x,o,y,e,r=input().split()
    result=0
    if o=="+":
        result=int(x)+int(y)
    else:
        result=int(x)-int(y)
    if int(r)==result:
        print("Case "+str(i)+": YES")
    else:print("Case "+str(i)+": NO")