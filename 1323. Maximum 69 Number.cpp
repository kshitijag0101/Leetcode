class Solution {
public:
    int maximum69Number (int num) {
        int temp=num,indsix=-1,curr;
        while(temp>0){
            if(temp%10==6) indsix=curr;
            temp/=10;
            curr++;
        }
        return indsix==-1?num:num+3*(int)pow(10,indsix);
    }
};