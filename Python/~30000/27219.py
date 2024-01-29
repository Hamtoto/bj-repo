n = int(input())

v = n //5
i = n % 5
s = ""
for j in range(0,v):
    s += "V"
for k in range(0,i):
    s += "I"

print(s)