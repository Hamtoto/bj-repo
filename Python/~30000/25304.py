x = int(input())
n = int(input())
tmp = 0
for i in range(n):
    a, b = map(int, input().split())
    tmp += (a * b)

if( x == tmp ):
    print("Yes")
else:
    print("No")