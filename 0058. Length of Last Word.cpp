class Solution {
public:
    int lengthOfLastWord(string s) {
        string res="";
        int flag=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' ' && flag==1){
                return res.length();
            }
            else if(s[i]!=' '){
                res+=s[i];
                flag=1;
            }
        }
        return res.length();
    }
};