N = int(input())
D = P = 0
record = [input() for _ in range(N)]
for i in record:
    if i == "D":
        D += 1
    else:
        P += 1
    if abs(D - P) == 2:	
        break
print(str(D) + ":" + str(P))