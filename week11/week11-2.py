#week11-2.py 要用篩子法
#以前的寫法.要30萬*30萬=900億次
#用篩子法,只要30萬+殺掉的那些格子快20萬倍
BOUND=300000
table=[True]*BOUND
ans=0
for i in range(2,BOUND):
  if table[i]==True:
    #print(i, end=' ')
    ans+=1
    for k in range(i*i,BOUND,i):
      table[k]=False
print('質數有:', ans,'個')
