a,b=map(int, input().split())

def gcd(a,b):
    while b:
        a,b=b,a%b
    return a

g=gcd(a,b)
l=a*b//g

print(g)
print(l)