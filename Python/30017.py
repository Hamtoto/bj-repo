a, b = map(int, input().split())

count = 3

a -= 2
b -= 1

tmp = min(a, b)
count += (2 * tmp)

print(count)