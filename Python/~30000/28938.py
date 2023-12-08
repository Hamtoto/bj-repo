n = int(input())
num_list = list(map(int, input().split()))
ans = 0
for i in range(0,n):
    if num_list[i] == -1:
        ans -= 1
    elif num_list[i] == 1:
        ans += 1
if ans < 0:
    print("Left")
elif ans == 0:
    print("Stay")
else:
    print("Right")