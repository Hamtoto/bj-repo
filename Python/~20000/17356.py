a, b = map(int, input().split())
m = (b - a)/400
tmp = 1 / (1 + 10**m)
print(tmp)