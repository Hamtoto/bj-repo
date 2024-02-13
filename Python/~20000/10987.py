string = list(str(input()))
count = 0
vowels = ['a', 'e', 'i', 'o', 'u']
for i in range(0, len(string)):
    for j in range(0, len(vowels)):
        if vowels[j] in string[i]:
            count +=1

print(count)