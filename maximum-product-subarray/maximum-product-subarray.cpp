class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int p=nums[0];
        int mn=nums[0];
        int mx=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0)
                swap(mn,mx);
            mx=max(nums[i],mx*nums[i]);
            mn=min(nums[i],mn*nums[i]);
             p=max(p,mx);
        
        }
       return p; 
    }
};