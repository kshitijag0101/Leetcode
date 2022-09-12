class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res="";
        int n=columnNumber;
        while(n){
            char ans='A'+(n-1)%26;
            res=ans+res;
            n=(n-1)/26;
        }
        return res;
    }
};