class Solution {
public:
    int maxArea(vector<int>& arr) {
        
        
        int n=arr.size()-1;
        int i=0;
        int j=n;
        int ans=0;
       while(i<j)
        {
            int m=min(arr[i],arr[j]);
            if(ans<(m*n))
            {
                ans=m*n;
            }
            if(arr[i]<arr[j])
            {
                i++;
                n--;
            }
            else 
            {
                j--;
                n--;
            }
            /*else
            {
                i++;
                j--;
                n-=2;
            }*/
        }
    
       return ans; 
    }
};