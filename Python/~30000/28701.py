n = int(input())
tmp = int(0)
a = int(0)
for i in range(0,n+1):
    tmp += i
    a += i ** 3
print(tmp)
print(tmp ** 2)
print(a)