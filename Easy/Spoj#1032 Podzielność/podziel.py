t = int(input())

for i in range(t):
    n, x, y = input().split(' ')

    n = int(n)
    x = int(x)
    y = int(y)

    ans = []

    b = 0
    a = 0
    while x * b < n:
        a = x * b
        ans.append(a)
        b+=1


    for num in ans:
        if num%y != 0:
            print(num, end=' ')
    print()
