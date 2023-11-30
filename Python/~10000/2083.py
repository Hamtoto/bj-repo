ans = []
while True:
    a, b, c = map(str, input().split())
    if a == '#': break
    if int(b) > 17 or int(c) >= 80:
        ans.append([a,'Senior'])
    else:
        ans.append([a,'Junior'])

for i in range(0,len(ans)):
    print(ans[i][0] + ' ' + ans[i][1])