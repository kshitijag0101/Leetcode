class Solution {
public:
    string breakPalindrome(string palindrome) {
        if(palindrome.size()==1) return "";
        int temp=1;
        for(int i=0;i<palindrome.size()/2;i++){
            if(palindrome[i]!='a'){ 
                temp=0;
                palindrome[i]='a';
                break;
            }
        }
        if(temp){
            palindrome[palindrome.size()-1]='b';
        }
        return palindrome;
    }
};