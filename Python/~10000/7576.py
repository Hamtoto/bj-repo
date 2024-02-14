import sys
input = sys.stdin.readline
m, n = map(int, input().split())
arr = [[0 for _ in range(m)] for _ in range(n)]
count = 0

for i in range(n):
    row_input = list(map(int, input().split()))
    for j in range(m):
        arr[i][j] = row_input[j]

changed = True
while changed:
    changed = False
    for i in range(n):
        for j in range(m):
            if arr[i][j] == 1:
                if i > 0 and arr[i - 1][j] == 0:
                    arr[i - 1][j] = 1
                    changed = True
                if i < n - 1 and arr[i + 1][j] == 0:
                    arr[i + 1][j] = 1
                    changed = True
                if j > 0 and arr[i][j - 1] == 0:
                    arr[i][j - 1] = 1
                    changed = True
                if j < m - 1 and arr[i][j + 1] == 0:
                    arr[i][j + 1] = 1
                    changed = True
    if changed:
        count += 1

if any(0 in row for row in arr):
    print(-1)
else:
    print(count)