n = int(input()) 
f_arr = []

for i in range(0,n): 
    a = input()
    f_arr.append(a)

ans = list(f_arr[0]) 

for i in range(0,n):
    for j in range(len(ans)):
        if ans[j] == f_arr[i][j]: 
            continue
        else:
            ans[j]='?'
print(''.join(ans))