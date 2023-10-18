n = int(input())
li = {}
li['Algorithm'] = '204'
li['DataAnalysis'] = '207'
li['ArtificialIntelligence'] = '302'
li['CyberSecurity'] = 'B101'
li['Network'] = '303'
li['Startup'] = '501'
li['TestStrategy'] = '105'
ans = []

for i in range(0,n):
    tmp = str(input())
    ans.append(li[tmp])

for i in range(0,n):
    print(ans[i])
