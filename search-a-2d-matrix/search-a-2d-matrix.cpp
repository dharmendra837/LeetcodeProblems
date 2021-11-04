class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int l= 0;
      //int r= (matrix.size())*(matrix[0].size())-1;
        int x=matrix.size();
        int y=matrix[0].size();
        int r=x*y-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(target == matrix[mid/y][mid%y])
            {
                return true;
            }
            else if(matrix[mid/y][mid%y]>target)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        
        return false;
    }
};