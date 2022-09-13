class Solution {
public:
    bool isPowerOfFour(int n){
        if(n<=0) return false;
        float a=1+(log(n)/log(4));
        int b=a;
        return ((b - a)==0);
    }
};