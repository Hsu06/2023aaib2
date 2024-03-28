#二進位的字串,裡面有一堆0和1
#想用這些0和1湊出最大的奇數
#解法:先計算(有幾個1),把一個1放最右邊,其他都放左邊,中間放0
class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        N=len(s)
        one=0
        for c in s:
            if c=='1':
                one+=1
        return '1'*(one-1)+'0'*(N-one)+'1'
