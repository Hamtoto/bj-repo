n = int(input())
for i in range(0,n):
    d, f, p = map(float, input().split())
    print('$%.2f' % (d*f*p))