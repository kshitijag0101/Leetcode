class Solution {
public:
    int calculate(string s) {
        stack<int>st; 
        int res=0; 
        long long cur_val=0,sign=1; 
        for(char c:s){ 
            if(isdigit(c)) {
                cur_val=10*cur_val+(c-'0'); 
            }
            else if(c=='+'){
                res+=cur_val*sign; 
                cur_val=0;
                sign=1;   
            }
            else if(c=='-'){
                res+=cur_val*sign; 
                cur_val=0; 
                sign=-1; 
            }
            else if(c=='('){
                st.push(res);    
                st.push(sign); 
                res=0; 
                sign=1;
            }
            else if(c==')'){ 
                res+=cur_val*sign; 
                cur_val=0;
                res=res*st.top(); 
                st.pop();
                res=res+st.top(); 
                st.pop();
            }
        }
        res+=cur_val*sign; 
        return res; 
    }
};