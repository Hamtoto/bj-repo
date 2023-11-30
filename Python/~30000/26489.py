def fn_gum():
    ans = 0
    
    while True:
        try:
            text = input()
            ans += 1
        except EOFError:
            break
    
    return ans


if __name__ == "__main__":
    print(fn_gum())