// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int begin=1;
        int end=n;
        int mid=(begin+((end-begin)/2));
        while(begin<end)
        {
            if((isBadVersion(mid)))
            {
                end=mid;
                mid=(begin+((end-begin)/2));
            }
            else
            {
                begin=mid+1;
                mid=(begin+((end-begin)/2));
            }
        }
        return mid;
    
    }
};