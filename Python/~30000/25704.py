N = int(input())
P = int(input())
s = [0]

if N >= 5:
    s.append(500)
if N >= 10:
    s.append(P // 10)
if N >= 15:
    s.append(2000)
if N >= 20:
    s.append(P // 4)

ans = P - max(s)

if ans < 0:
    ans = 0
print(ans)

#숏코딩
#N = int(input())
#P = int(input())
#s = [0, 500*(N>=5), P//10*(N>=10), 2000*(N>=15), P//4*(N>=20)]
#print(max(0, P - max(s)))