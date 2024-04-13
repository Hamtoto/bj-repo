from sys import stdin

for i in range(0,3):
    sum = 0
    n = int(stdin.readline())
    for j in range(0,n):
        sum += int(stdin.readline())
    if sum == 0:
        print("0")
    elif sum > 0:
        print("+")
    else:
        print("-")
