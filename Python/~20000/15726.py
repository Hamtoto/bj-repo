arr = list(map(int, input().split()))
x = int(arr[0] * arr[1] / arr[2])
y = int(arr[0] / arr[1] * arr[2])

if x > y:
    print(x)
elif y > x:
    print(y)
elif x == y:
    print(x)