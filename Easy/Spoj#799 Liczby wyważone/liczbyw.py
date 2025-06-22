import math

def dzielniki(n):
    dziel = []

    for i in range(1, int(round(math.sqrt(n)))+1):
        if n % i == 0:
            dziel.append(i)
            dziel.append(int(n/i))

    dziel.sort()
    return dziel

t = int(input())

for i in range(t):
    n = int(input())

    i = n+1
    parzyste = 0
    n_parzyste = 0


    while True:
        parzyste = 0
        n_parzyste = 0

        tab = dzielniki(i)

        for item in tab:
            if item%2 == 0:
                parzyste+=1
            else:
                n_parzyste += 1

        if parzyste == n_parzyste:
            print(i)
            break
        i+=1
