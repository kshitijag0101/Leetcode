class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int i=0,j=0,mx=0;
        map<char,int> mp;
        while(j<n){
            mp[s[j]]++;
            if(mp.size()==j-i+1){
                mx=max(mx,j-i+1);
            }
            else if(mp.size()<j-i+1){
                while(mp.size()<j-i+1){
                    mp[s[i]]--;
                    if(mp[s[i]]==0){
                        mp.erase(s[i]);
                    }
                    i++;
                }
            }
            j++;
        }
        return mx;
    }
};