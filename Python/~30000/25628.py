A, B = map(int, input().split())
ans = 0

while(True):
    if((A-2)>= 0 and (B-1) >= 0):
        A -= 2
        B -= 1
        ans +=1
    else:
        break
print(ans)