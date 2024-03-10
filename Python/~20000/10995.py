n = int(input())
if n == 1:
    print("*")
else:
    for i in range(0,n):
        if i % 2 == 0:
            print("* " * n)
        else:
            print(" *" * n)