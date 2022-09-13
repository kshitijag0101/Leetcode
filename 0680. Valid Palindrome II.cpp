class Solution {
public:
    bool validPalindrome(string s) {
        int n=s.size();
        int i=0,j=n-1,ti,tj,flag=0;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                if(flag==1){
                    i=ti;
                    j=tj;
                    flag=2;
                    continue;
                }
                else if(flag==2){
                    return false;
                }
                if(s[i+1]==s[j]){
                    ti=i;
                    tj=j-1;
                    i=i+2;
                    j--;
                    flag=1;
                }
                else{
                    flag=2;
                    j--;
                }
            }
        }
        return true;
    }
};