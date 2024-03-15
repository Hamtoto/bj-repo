t = int(input())
for i in range(0, t):
    n = int(input())
    mok = n // 5
    nam = n % 5

    for j in range(mok):
        print('++++', end=" ")
    for k in range(nam):
        print('|', end="")
    print("")