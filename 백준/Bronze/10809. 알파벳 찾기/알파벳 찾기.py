s=input()
a=[]
for i in range(26):
    a.append(chr(i+97))
    i+=1
for ii in range(26):
    print(s.find(a[ii]))