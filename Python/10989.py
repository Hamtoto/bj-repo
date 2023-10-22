import sys

n = int(sys.stdin.readline())
arr = [0] * 10001

for _ in range(0,n):
    num = int(sys.stdin.readline())
    arr[num] += 1 

for i in range(10001): 
    if(arr[i] != 0):
        for j in range(0,arr[i]): 
            print(i)