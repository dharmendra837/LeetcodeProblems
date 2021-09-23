class Solution {
    
public:
    
    int search(vector<int>& nums, int target) {
        int x=nums.size();
       int begin=0;
        int end=x-1;
       int mid=(begin+mid)/2;
        while(begin<=end)
        {
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
                    {
                        begin=mid+1;
                        mid=(begin+end)/2;
                
                    }
            else
            {
                end=mid-1;
                mid=(begin+end)/2;
            }
        }
       return -1;
    }
};