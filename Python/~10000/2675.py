t = int(input())

for i in range(t):
    r, s = map(str, input().split())
    li_s = list(s)
    for j in range(0, len(li_s)):
        for k in range(int(r)):
            print(li_s[j], end="")
    print()