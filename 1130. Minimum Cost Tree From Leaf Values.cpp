class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
        int res=0;
        stack<int> st;
        st.push(INT_MAX);
        for(int x:arr){
            while(st.top()<=x){
                int mid=st.top();
                st.pop();
                res+=mid*min(st.top(),x);
            }
            st.push(x);
        }
        while(st.size()>2){
            int temp=st.top();
            st.pop();
            res+=temp*st.top();
        }
        return res;
    }
};