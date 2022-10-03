class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        bool visited[n];
        for(int i=0;i<n;i++) visited[i]=false;
        visited[0]=true;
        stack<int> st;
        st.push(0);
        while(!st.empty()){
            int temp=st.top();
            st.pop();
            for(int x:rooms[temp]){
                if(!visited[x]){
                    visited[x]=true;
                    st.push(x);
                }
            }
        }
        for(bool v:visited){
            if(!v) return false;
        }
        return true;
    }
};