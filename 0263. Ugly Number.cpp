class Solution {
public:
    int divideIfDivisible(int dividend,int divisor){
        while(dividend%divisor==0){
            dividend/=divisor;
        }
        return dividend;
    }
    bool isUgly(int n) {
        if(n<=0) return false;
        int factor[3]={2,3,5};
        for(auto x:factor){
            n=divideIfDivisible(n,x);
        }
        return n==1;
    }
};