class Solution:
    def duplicateNumbersXOR(self, nums: List[int]) -> int:
        table={}
        for num in nums:
            if num in table:
                table[num]+=1
            else:
                table[num]=1
        ans=0
        for num in table:
                if table[num]==2:
                    ans=ans^num
        return ans




