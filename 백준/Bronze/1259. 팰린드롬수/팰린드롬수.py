while True:
    a=True
    n=int(input())
    if n==0:
        break
    else:
        c=str(n)

        for i in range(len(c)//2):
            if c[len(c)-1-i]==c[i]:
                continue
            else:
                a=False
                print('no')
                break

        if a==True:
            print('yes')
    
        