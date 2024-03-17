li = ["M", "O", "B", "I", "S"]
s = input()
ans = True

for i in li:
    if i not in s :	
        ans = False
        break

if ans:
    print("YES")
else:
    print("NO")
