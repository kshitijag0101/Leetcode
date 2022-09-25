class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        unordered_map<char,string> map;
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                v.push_back(temp);
                temp="";    
            }
            else{
                temp+=s[i];
            }
        }
        v.push_back(temp);
        if(pattern.size()!=v.size()) return false;
        set<string> st;
        for(int i=0;i<pattern.size();i++){
            if(map.find(pattern[i])!=map.end()){ 
                if(map[pattern[i]]!=v[i]){
                    return false;
                }     
            }
            else{
                if(st.count(v[i])>0){
                    return false;
                }
                map[pattern[i]]=v[i];    
                st.insert(v[i]);
            }
        }
        return true;   
    }
};