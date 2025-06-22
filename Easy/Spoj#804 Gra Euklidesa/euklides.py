t = int(input())

for i in range(t):
    a, b = input().split()
    a = int(a)
    b = int(b)
    
    while a != b:
        if a < b:
            b -= a
        elif b < a:
            a -= b

    print(a+b)
