s = list(str(input()))
l = len(s)
quo = l // 10
rem = l % 10
tmp = 0

for i in range(1, quo + 1):
    print(''.join(s[tmp:i*10]))
    tmp += 10
print(''.join(s[tmp:tmp + rem]))