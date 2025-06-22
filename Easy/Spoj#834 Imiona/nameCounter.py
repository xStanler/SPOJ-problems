imiona = []

while True:
    x = input()
    nr, nazwisko, imie = x.split(' ')
    imie = imie.upper()
    imiona.append(f'{imie} {nazwisko}')
    if not x:
        break


ans = []

imiona_inne = set(imiona)

for imie in imiona_inne:
    x = imiona.count(imie)
    ans.append(f'{x} {imie}')

ans.sort(reverse=True)

for odp in ans:
    n, imie = odp.split(' ')
    print(imie, n)
