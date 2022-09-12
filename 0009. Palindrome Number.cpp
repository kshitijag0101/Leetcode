class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        string s=to_string(x);
        string str=string(s.rbegin(),s.rend());
        if(str!=s){
            return false;
        }
        return true;
    }
};