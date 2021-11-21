class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)
            return true;
       long long int i=1;
        while(num>=0)
        {
            num-=i;
            if(num==0)
                return true;
            i+=2;
        }
        return false;
    }
};