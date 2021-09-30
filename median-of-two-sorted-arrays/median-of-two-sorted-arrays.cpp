class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        int temp=(nums1.size()+nums2.size());
        int j=0;
       for(int i=0;i<temp;i++)
        {
            if(i<nums1.size())
            {
                v.push_back(nums1[i]);
            }
            else
            {
                v.push_back(nums2[j]);
                j++;
            }
        }
        sort(v.begin(),v.end());
        int a=v.size();
        if(temp%2 == 0)
        {
            int x=v.size()/2;
            double x1= (double(v[x]+v[x-1])/2);
            return x1;
        }
        else
        {
            int x=v.size()/2;
            return v[x];
        }
        
      
    }
};