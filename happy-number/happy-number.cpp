class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>s;
        while(n!=1)
        {
            if(s.find(n)==s.end())
            {
                s.insert(n);
            }
            else
            {
                return false;
            }
            
            int sum=0;
            while(n>0)
            {
                int temp=n%10;
                n=n/10;
                sum=sum+temp*temp;
            }
            n=sum;
        }
        return true;
    }
};