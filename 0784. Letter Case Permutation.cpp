class Solution {
public:
    void solve(vector<string> &res,string s,string &curr,int index){
        if(index==s.size()){
            res.push_back(curr);
            return;
        }
        if(s[index]>='a' && s[index]<='z'){
            curr.push_back(s[index]);
            solve(res,s,curr,index+1);
            curr.pop_back();
            curr.push_back('A'+(s[index]-'a'));
            solve(res,s,curr,index+1);
            curr.pop_back(); 
        }
        
        else if(s[index]>='A' && s[index]<='Z'){
            curr.push_back(s[index]);
            solve(res,s,curr,index+1);
            curr.pop_back();
            curr.push_back('a'+(s[index]-'A'));
            solve(res,s,curr,index+1);
            curr.pop_back(); 
        }
        else{
            curr.push_back(s[index]);
            solve(res,s,curr,index+1);
            curr.pop_back();
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        string curr="";
        solve(res,s,curr,0);
        return res;
    }
};