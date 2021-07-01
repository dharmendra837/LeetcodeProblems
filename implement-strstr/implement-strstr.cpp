class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int i=0;
        int j=0;
        int in;
        int x=0,c=0;
        if(needle.size()==0)
        {
            return 0;
        }
       while(i<needle.size() && j<haystack.size())
       {
           if(needle[i]==haystack[j] )
              {   x=j;
                  i++;
               j++;
               c++;
              }
           else
           {
               i=0;
               j=j-c+1;
               c=0;
           }
       }
        if(i==needle.size())
        {
            return (x-(needle.size()-1));
        }
        else
        {
            return -1;
        }
    }
};