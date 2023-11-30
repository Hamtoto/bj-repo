N = int(input())
A, B, C = map(int, input().split())

ans = 0
if N > A:
    ans += A
elif N <= A:
    ans += N
if N > B:
    ans += B
elif N <= B:
    ans += N
if N > C:
    ans += C
elif N <= C:
    ans += N

print(ans)