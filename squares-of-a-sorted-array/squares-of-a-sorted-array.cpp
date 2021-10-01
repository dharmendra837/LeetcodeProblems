class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v;
        int l=0;
        int h=nums.size()-1;
        while(l<=h)
              {   if(l==h)
              {
                  v.push_back(nums[l]*nums[l]);
                  break;
              }
              int temp=(nums[l]*nums[l]);
               v.push_back(temp);
               int temp1=(nums[h]*nums[h]);
               v.push_back(temp1);
               l++;
               h--;
              }
        sort(v.begin(),v.end());
        return v;
        
    }
};