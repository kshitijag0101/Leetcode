// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long l=1,h=n,mid;
        while(l<=h){
            mid=(l+h)/2;
            if(isBadVersion(mid)){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
            if(isBadVersion(mid) && !isBadVersion(mid-1)){
                return mid;
            }
        }
        return 1;
    }
};