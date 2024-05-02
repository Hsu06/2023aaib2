#week10-1.py 函式呼叫函式 N皆乘
N=int(input('請輸入N:'))
#以前是用迴圈寫,今天用函式呼叫函式來寫
def func(n):
  if n==1:
    return 1 #終止條件, 像數學歸納法 N=1 成立
  return n*func(n-1) #函式呼叫函式,把大問題改成去問[小問題]
ans=func(N)
print(ans)
