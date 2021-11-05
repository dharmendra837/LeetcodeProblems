class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int l= 0;
      //int r= (matrix.size())*(matrix[0].size())-1;
        int x=matrix.size();
        int y=matrix[0].size();
        int r=0;
        int c=y-1;
        while(r<x && c>=0)
        {
            if(matrix[r][c]== target)
            {
                return true;
            }
            else if(matrix[r][c]>target)
            {
                c--;
            }
            else
            {
                r++;
            }
        }
        
        return false;
    }
};