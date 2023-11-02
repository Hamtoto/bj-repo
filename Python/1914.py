def fn(n, a, b, c):
  if(n == 1):
    print(a, c, sep = " ")
  else:
    fn(n-1, a, c, b)
    fn(1, a, b, c)
    fn(n-1, b, a, c)

n = int(input())
print(2 ** n - 1)

if(n <= 20):
  fn(n, 1, 2, 3)