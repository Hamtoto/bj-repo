n = int(input())
even = odd_num = 0
arr = list(map(int, input().split()))

for i in range(0,len(arr)):
    if arr[i] % 2 == 0:
        even += 1
    elif arr[i] % 2 != 0:
        odd_num += 1
if even > odd_num:
    print("Happy")
else:
    print("Sad")
        
