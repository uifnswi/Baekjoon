
while True:
    a,b,c=map(int,input().split())
    if a==b==c==0:
        break
    rlfdj=max(a,b,c)
    if a+b+c-rlfdj<=rlfdj:
        print("Invalid")
    else:
        if a==b==c:
            print("Equilateral")
        elif a==b or b==c or a==c:
            print("Isosceles")
        else:
            print("Scalene")