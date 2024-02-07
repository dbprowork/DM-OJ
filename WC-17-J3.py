psswrd = input()

upper = 0
lower = 0
digit = 0
disqual = 0

for i in psswrd:
    if i.isupper():
        upper += 1
    elif i.islower():
        lower += 1
    elif i.isdigit():
        digit += 1
    else:
        disqual += 1

if len(psswrd) >= 8 and len(psswrd) <= 12:
    if upper >= 2 and lower >= 3 and digit >= 1 and disqual == 0:
        print('Valid')
    else:
        print('Invalid')
else:
    print('Invalid')
