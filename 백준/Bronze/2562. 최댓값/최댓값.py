num=[]
for i in range(9):
    num.append(int(input()))
max=num[0]
count=1
for i in range(1,9):
    if num[i]>max:
        max=num[i]
        count=i+1
print(max)
print(count)