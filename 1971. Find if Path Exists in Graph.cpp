class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>> mp;
        for(auto& x:edges){
            mp[x[0]].push_back(x[1]);
            mp[x[1]].push_back(x[0]);
        }
        queue<int> q;
        q.push(source);
        vector<bool> visited(n,false);
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            if(curr==destination) return true;
            for(auto& x: mp[curr]){
                if(!visited[x]){
                    q.push(x);
                    visited[x]=true;
                }
            }
        }
        return false;
    }
};