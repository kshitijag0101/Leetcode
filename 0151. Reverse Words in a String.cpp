class Solution {
public:
    string reverseWords(string s) {
        string res="";
        stack<string> st;
        for(int i=0;i<s.length();i++){
            string s1="";
            while(i<s.length() && s[i]!=' '){
                s1+=s[i];
                i++;
            }
            if(s1=="") continue;
            st.push(s1);
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
            res+=" ";
        }
        res.pop_back();
        return res;
    }
};