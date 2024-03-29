long long countSubarrays(int* nums, int numsSize, int k) {
    int M=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]>M) M=nums[i];
    }
    int long long ans=0,tail=0,MN=0;
    for(int head=0;head<numsSize;head++){
        if(nums[head]==M) MN+=1;
        while(MN>=k){
            if(nums[tail]==M) MN-=1;
            tail+=1;
        }
        ans+=tail;
    }
    return ans;
}
