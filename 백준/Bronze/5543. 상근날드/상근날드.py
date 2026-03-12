H=[]
for i in range(3):
    h=int(input())
    H.append(h)
D=[]
for i in range(2):
    d=int(input())
    D.append(d)
    
print(min(H)+min(D)-50)