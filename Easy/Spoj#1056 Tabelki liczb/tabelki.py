t = int(input())

for i in range(t):
    l, k = map(int, (input().strip()).split(' '))
    max_char = 2*k-1

    text = ''   
    for j in range(l):
        text += input().strip()

    ans = ''
    for j in range(l):
        if(j == 0):
            ans += text[2:max_char] + ' ' + text[2*max_char-1] + '\n'
        elif(j == l-1):
            ans += text[((j-1)*max_char)] + ' ' + text[j*max_char: (j*max_char)+max_char-2]
        else:
            ans += text[(j-1)*max_char] + ' ' + text[j*max_char+2:(j*max_char)+max_char-2] +  ' ' + text[(j+2)*max_char-1]+'\n' 

    print(ans)

