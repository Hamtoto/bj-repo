arr = []
i = cnt = 0
while(i == 0):
  arr = list(map(int, input().split()))
  if(len(arr) == 1 and arr[0]== 0):
    break
  cnt += 1

for i in range(0,cnt):
  print("Case " + str(i+1) + ": Sorting... done!")