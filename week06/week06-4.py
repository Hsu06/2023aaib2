class Solution:
    def countSubarrays(self, nums: List[int], k: int) -> int:
        ans=0
        tail=0
        M=max(nums) #找最大值
        MN=0 #最大值出現幾次
        for head in range(len(nums)): #以頭為準,慢慢往右吃
            if nums[head]==M: MN+=1 #找到最大值,加一次
            #目標:希望 MN>=k 合法
            while MN>=k:
                if nums[tail]==M: MN-=1 #少一個
                tail+=1 #尾巴往右
            #縮完之後,tail對應左邊有幾個合法尾巴位子
            ans+=tail #可增加這麼多種合法可能
        return ans


