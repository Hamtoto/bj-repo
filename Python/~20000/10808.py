c = str(input())

char_arr = [int(0)] * 26

for i in range(0,len(c)):
    if c[i] == 'a':
        char_arr[0] += 1
    elif c[i] == 'b':
        char_arr[1] += 1
    elif c[i] == 'c':
        char_arr[2] += 1
    elif c[i] == 'd':
        char_arr[3] += 1
    elif c[i] == 'e':
        char_arr[4] += 1
    elif c[i] == 'f':
        char_arr[5] += 1
    elif c[i] == 'g':
        char_arr[6] += 1
    elif c[i] == 'h':
        char_arr[7] += 1
    elif c[i] == 'i':
        char_arr[8] += 1
    elif c[i] == 'j':
        char_arr[9] += 1
    elif c[i] == 'k':
        char_arr[10] += 1
    elif c[i] == 'l':
        char_arr[11] += 1
    elif c[i] == 'm':
        char_arr[12] += 1
    elif c[i] == 'n':
        char_arr[13] += 1
    elif c[i] == 'o':
        char_arr[14] += 1
    elif c[i] == 'p':
        char_arr[15] += 1
    elif c[i] == 'q':
        char_arr[16] += 1
    elif c[i] == 'r':
        char_arr[17] += 1
    elif c[i] == 's':
        char_arr[18] += 1
    elif c[i] == 't':
        char_arr[19] += 1
    elif c[i] == 'u':
        char_arr[20] += 1
    elif c[i] == 'v':
        char_arr[21] += 1
    elif c[i] == 'w':
        char_arr[22] += 1
    elif c[i] == 'x':
        char_arr[23] += 1
    elif c[i] == 'y':
        char_arr[24] += 1
    elif c[i] == 'z':
        char_arr[25] += 1

for i in range(0,26):
    print(char_arr[i], end="")
    print(" ", end="")