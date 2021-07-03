class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>x;
        for(int i=0;i<=n;i++)
        {
           x.push_back( __builtin_popcount(i));
        }
        return x;
    }
};