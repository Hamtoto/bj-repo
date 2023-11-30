list = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']

while True:
    c = 0
    text = input()
    if text == '#': 
        break
    for s in text:
        if s in list:
            c += 1
    print(c)