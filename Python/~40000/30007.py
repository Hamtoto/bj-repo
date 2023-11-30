n = int(input())
ans = []
for i in range(0,n):
    a, b, x= map(int, input().split())
    ans.append(a*(x-1)+b)
for i in range(0,n):
    print(ans[i])