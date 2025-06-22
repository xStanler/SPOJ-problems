x = int(input())
sign = ''

for i in range(x):
    option = input()
    n = int(input())

    if 'd' in option:
        sign = '->'
        print('digraph {')

    if 'g' in option:
        sign = '--'
        print('graph {')

    if 'w' in option:
        for j in range(n):
            x, y, weight = input().split(' ')
            print(f'{x} {sign} {y} [label = {weight}];')
        print('}')
    else:
        for j in range(n):
            x, y = input().split(' ')
            print(f'{x} {sign} {y};')
        print('}')
