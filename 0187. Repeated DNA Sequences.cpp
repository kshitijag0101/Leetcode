class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string,int> m;
        vector<string> res;
        if(s.length()<=10) return res;
        for (int i=0;i<=s.length()-10;i++){
            string a=s.substr(i,10);
            m[a]++;
        }
        for (auto i:m){
            if(i.second>1) res.push_back(i.first);
        }
        return res;
    }
};