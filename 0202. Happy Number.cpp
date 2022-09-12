class Solution {
public:
    bool isHappy(int n) {
        while(n!=1){
            int temp=0;
            while(n>0){
                int rem=n%10;
                temp+=(rem*rem);
                n=n/10;
            }
            n=temp;
            if(temp==89){
                return false;
            }
        }
        return n==1;
    }
};