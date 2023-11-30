text = input()
tmp = list(text)
text = int(text)
if any(str in "7" for str in tmp):
    if(text / 7 == text // 7):
        print("3")
    else:
        print("2")
else:
    if(text / 7 == text // 7):
        print("1")
    else:
        print("0")
