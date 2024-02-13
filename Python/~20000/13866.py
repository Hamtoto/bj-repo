arr = list(map(int, input().split()))
t1 = max(arr) + min(arr)
arr.remove(max(arr))
arr.remove(min(arr))
t2 = sum(arr)

if t1 >= t2:
    print(t1-t2)
else:
    print(t2-t1)