while True:
    t=input()
    if t=='0':
        break
    else:
        if t==t[::-1]:
            print('yes')
        else:
            print('no')
    