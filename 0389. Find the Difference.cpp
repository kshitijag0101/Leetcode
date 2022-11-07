class Solution {
public:
    char findTheDifference(string s, string t) {
        char res;
        map<char,int> mp;
        for(char x:t){
            mp[x]++;
        }
        for(char x:s){
            mp[x]--;
        }
        for(auto x:mp){
            if(x.second==1){
                res=x.first;
                break;
            }
        }
        return res;
    }
};