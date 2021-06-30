class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size()==0)
            return "";
        string ans;
        ans=strs[0];     // initialised the first string 
        for(int i=1; i<strs.size();i++)
        {
            for(int j=0;j<ans.size();j++)
            {
                if(strs[i][j]!=ans[j])
                {
                    ans.erase(j);
                }
            }
        }
        if(ans.size()!=0)
        {
            return ans;
        }
        else
        {
            return "";
        }
    }
};