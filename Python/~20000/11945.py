n, m = map(int, input().split())
for i in range(0, n):
    tmp = list(str(input()))
    tmp.reverse()
    tmp = "".join(tmp)
    print(tmp)