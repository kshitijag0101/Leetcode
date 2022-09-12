class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                int val1=st.top();st.pop();
                int val2=st.top();st.pop();
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
        return st.top();
    }
};