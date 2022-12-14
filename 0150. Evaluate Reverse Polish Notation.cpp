class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                long long val1=st.top();st.pop();
                long long val2=st.top();st.pop();
                switch(tokens[i][0]){
                    case '+': st.push(val2+val1);break;
                    case '-': st.push(val2-val1);break;
                    case '*': st.push(val2*val1);break;
                    case '/': st.push(val2/val1);break;
                }
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return (int)st.top();
    }
};