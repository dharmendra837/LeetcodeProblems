class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        // useing two pointers its will solved efficiently
        int i=0;int j=0;
        if(s.size()==0)
        {
            return true;
        }
        while(i<s.size() && j<t.size())
        {
            if(s[i]==t[j])
            {
                i++;j++;
            }
            else
            {
                j++;
            }
        }
        
        if(i==s.size())
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};