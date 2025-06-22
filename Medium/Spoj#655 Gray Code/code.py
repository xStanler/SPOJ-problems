def grayCode(arr):
    length = len(arr)
    arr2 = []

    for i in range(1, length+1):
        arr2.append(arr[-i])

    arr = arr + arr2
    
    for i in range(1, length+1):
        arr[i-1] = "0" + arr[i-1]
        arr[-i] = "1" + arr[-i]

    return arr

code = ['0', '1']

t = int(input())

for i in range(t):
    arr = code
    n = int(input())

    for i in range(n-1):
        arr = grayCode(arr)

    for line in arr:
        print(line)
    print()
