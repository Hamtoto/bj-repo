n = int(input())
c, b = map(int, input().split())
tmp = c//2 + b

if n >= tmp :
    print(tmp)
else :
    print(n)