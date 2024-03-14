s = str(input())
n = int(input())
count = 0
for i in range(n):
    tmp = str(input())
    if s == tmp:
        count += 1

print(count)