class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1) return true;
        if(n<3 || n%2==0 || n%3!=0) return false;
        while(true){
            if(n==3) return true;
            n=n/3;
            if(n%2==0 || n%3!=0) break;
        }
        return false;
    }
};