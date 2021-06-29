class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
       int ans=100001;
      
        for(int i=0;i<nums.size()&&ans!=0;i++)
        {
            
                int lo=i+1,hi=nums.size()-1;
                
                while(lo<hi)
                {    int sum=nums[i]+nums[lo]+nums[hi];
                    if(abs(ans)>abs(target-sum))
                            ans=(target-sum);
                   
                    if(sum<target) {
                        lo++;
                         }
                      
                    else
                    {
                        hi--;
                    }
                }
               
        
    
        }
        return target-ans;
    }
};