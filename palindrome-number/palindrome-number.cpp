class Solution {
public:
    bool isPalindrome(int x) {
    long long    int temp=0;
     long long   int x1=x;
        if(x<0)
        {
            return false;
        }
        if(x==0)
        {
            return true;
        }
        while(x!=0)
        {
          temp=(temp*10)+ x%10;
            x=x/10;
            
        }
        if(temp==x1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};