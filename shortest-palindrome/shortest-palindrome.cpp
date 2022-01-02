// kmp algo
class Solution {
public:
    string shortestPalindrome(string s) {
        
        string s2(s);
        reverse(s2.begin(),s2.end());
        string s3=s+"#"+s2;
        vector<int>v(s3.size(),0);
        for(int i=1;i<s3.size();i++)
        {
            int t=v[i-1];
            while(t>0 && s3[i]!=s3[t])
            {
                t=v[t-1];
            }
            if(s3[i]==s3[t])
            {
                ++t;
            }
            v[i]=t;
        }
        return s2.substr(0,s.size()-v[s3.size()-1])+s;
    }
};