class Solution {
public:
    void dfs(int node,vector<int>& edges, vector<int>& dist,vector<bool>& visited){
        visited[node]=true;
        int x=edges[node];
        if(x!=-1 && visited[x]==false){
            dist[x]=dist[node]+1;
            dfs(x,edges,dist,visited);
        }
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n=edges.size();
        int res=-1;
        int mindist=INT_MAX;
        vector<int> dist1(n,0),dist2(n,0);
        vector<bool> visited1(n,false),visited2(n,false);
        dfs(node1,edges,dist1,visited1);
        dfs(node2,edges,dist2,visited2);
        for(int curr=0;curr<n;curr++){
            if(visited1[curr]==true && visited2[curr]==true && mindist>max(dist1[curr],dist2[curr])){
                mindist=max(dist1[curr],dist2[curr]);
                res=curr;
            }
        }
        return res;
    }
};