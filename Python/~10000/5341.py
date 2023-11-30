ans = []
while(True):
    n = int(input())
    if(n == 0): break
    tmp = int(0)
    for i in range(0,n):
        tmp += n
        n -= 1
    ans.append(tmp)
for i in range(len(ans)):
    print(ans[i])