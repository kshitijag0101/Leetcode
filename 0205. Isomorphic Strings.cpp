class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<char> v1(256,0),v2(256,0);
        for(int i=0;i<s.size();i++){
            if(!v1[s[i]] && !v2[t[i]]){
                v1[s[i]]=t[i];
                v2[t[i]]=s[i];
            }
            else if(v1[s[i]]!=t[i] || v2[t[i]]!=s[i]){
                return false;
            }
        }
        return true;
    }
};
