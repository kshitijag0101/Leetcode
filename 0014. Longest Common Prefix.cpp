class Solution {
public:
    string common(string s1,string s2){
        string res="";
        int i=0;
        while(i<s1.size() && i<s2.size()){
            if(s1[i]==s2[i]){
                res+=s1[i];
            }
            else{
                break;
            }
            i++;
        }
        return res;
    }
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        if(strs.size()==1) return strs[0];
        string cmp=common(strs[0],strs[1]);
        for(int i=2;i<strs.size();i++){
            if(cmp.size()>0){
                cmp=common(cmp,strs[i]);
            }
            else{
                break;
            }
        }
        return cmp;
    }
};