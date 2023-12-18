li = []

for i in range(0,9):
    li.append(int(input()))
tmp = max(li)

for j in range(0,9):
    if li[j] == tmp:
        print(tmp)
        print(j+1)