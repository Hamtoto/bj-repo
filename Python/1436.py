n = int(input())
count = int(0)
ans = int(666)
 
while True:
    if('666' in str(ans)):
        count += 1
    if(count == n):
        break
    ans += 1
print(ans)