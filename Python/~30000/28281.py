n, x = map(int, input().split())
s = list(map(int, input().split()))
price = []

for i in range(n - 1):
    price.append((s[i] + s[i + 1]) * x)

print(min(price))
