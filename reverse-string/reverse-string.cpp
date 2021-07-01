class Solution {
public:
    void reverseString(vector<char>& s) {
      int li=0;
        int hi=s.size()-1;
        int ans=0;
      while(li<hi)
      {
          char c;
         c=s[li];
          s[li]=s[hi];
          s[hi]=c;
          li++;
          hi--;
      }//return s;
    }
};