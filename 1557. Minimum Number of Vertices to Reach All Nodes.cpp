class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> temp(n,0),res;
        for(int i=0;i<edges.size();i++){
            int x=edges[i][1];
            temp[x]++;
        }
        for(int i=0;i<temp.size();i++){
            if(temp[i]==0) res.push_back(i);
        }
        return res;
    }
};