class Solution:
    def countSubarrays(self, nums: List[int], k: int) -> int:
        ans=0
        tail=0
        M=max(nums) #��̤j��
        MN=0 #�̤j�ȥX�{�X��
        for head in range(len(nums)): #�H�Y����,�C�C���k�Y
            if nums[head]==M: MN+=1 #���̤j��,�[�@��
            #�ؼ�:�Ʊ� MN>=k �X�k
            while MN>=k:
                if nums[tail]==M: MN-=1 #�֤@��
                tail+=1 #���ک��k
            #�Y������,tail�������䦳�X�ӦX�k���ڦ�l
            ans+=tail #�i�W�[�o��h�ئX�k�i��
        return ans


