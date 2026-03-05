t=int(input())
for i in range(t):
    H,W,N=map(int, input().split())
    if N%H==0:
        h=H
        w=N//H
    else:
        h=N%H
        w=N//H+1
    if w>=10:
        print(str(h)+str(w))
    else:
        print(str(h)+"0"+str(w))
    i+=1