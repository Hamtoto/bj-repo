L, P = map(int, input().split())
people = list(map(int, input().split()))
for i in range(0,5):
    people[i] = people[i] - (L * P)
    print(people[i], end=" ")