class Solution {
public:
    int divide(int dividend, int divisor) {
        long q=0;
        if(dividend==-2147483648 && divisor==-1) return 2147483647;
        bool s=0;
        if(dividend<0 && divisor>0) s=1;
        if(dividend>0 && divisor<0) s=1;
        long a=abs(dividend),b=abs(divisor);
        for(int i=31;i>=0;i--){
            if(a>=(b<<i)){
                a-=(b<<i);
                q+=(1<<i);
            }
        }
        if(s) return -q;
        return q;
    }
};