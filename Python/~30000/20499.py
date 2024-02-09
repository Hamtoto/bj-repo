kda = str(input())
kda = kda.split("/")
k = int(kda[0])
d = int(kda[1])
a = int(kda[2])

if d == 0 or k + a < d:
    print("hasu")
else:
    print("gosu")