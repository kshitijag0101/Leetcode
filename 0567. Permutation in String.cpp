class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        int mp1[26]={0},mp2[26]={0};
        for(int i=0;i<s1.size();i++){
            mp1[s1[i]-'a']++;
            mp2[s2[i]-'a']++;
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(mp1[i]==mp2[i]) count++;
        }
        for(int i=0;i<s2.size()-s1.size();i++){
            int r=s2[i+s1.length()]-'a',l=s2[i]-'a';
            if(count==26) return true;
            mp2[r]++;
            if(mp1[r]==mp2[r]) count++;
            else if(mp2[r]==mp1[r]+1){
                count--;
            }
            mp2[l]--;
            if(mp1[l]==mp2[l]) count++;
            else if(mp2[l]==mp1[l]-1) count--;
        }
        return count==26;
    }
};