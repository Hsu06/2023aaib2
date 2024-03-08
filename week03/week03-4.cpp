class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        T=[0]*101
        best=0
        for num in nums:
            T[num]+=1
            if T[num]>best: best=T[num]

            total=0
        for t in T:
            if t==best: total+=t
        return total
