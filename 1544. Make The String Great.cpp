class Solution {
public:
    string makeGood(string s) {
        vector<char> st;
        for(auto x:s){
            if(!st.empty() && abs(st.back()-x)==32){
                st.pop_back();
            }
            else{
                st.push_back(x);
            }
        }
        string res(st.begin(),st.end());
        return res;
    }
};

