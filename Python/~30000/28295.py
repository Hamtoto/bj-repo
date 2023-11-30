dic = ["N", "E", "S", "W"]
ans = "N"

for i in range(10):
    command = int(input())
    if command == 1:
        ans = dic[(dic.index(ans) + 1) % 4]
    elif command == 2:
        ans = dic[(dic.index(ans) + 2) % 4]
    elif command == 3:
        ans = dic[(dic.index(ans) + 3) % 4]

print(ans)