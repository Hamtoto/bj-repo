N, M, K = map(int, input().split())
ans = min(M, K) + N - max(M, K)
print(ans)