n = int(input())
ans = []
for i in range(0,n):
    tmp = str(input())
    if(len(tmp)>=6 and len(tmp) <= 9):
        ans.append("yes")
    else:
        ans.append("no")
for i in range(0,n):
    print(ans[i])
