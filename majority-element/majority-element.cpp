class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
      unordered_map<int,int>hash;
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }
        int count=0,ans=-1;
        for(auto it: hash)
        {
            if(count<it.second){
                ans=it.first;
                count=it.second;}
        }
        return ans;
    }
};