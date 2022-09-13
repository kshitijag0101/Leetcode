class Solution {
public:
    void dfs(vector<vector<int>>& heights,vector<vector<bool>>& flag,int x,int y){
        flag[x][y]=true;
        if(x-1>=0 && !flag[x-1][y] && heights[x-1][y]>=heights[x][y]){
            dfs(heights,flag,x-1,y);
        }
        if(x+1<heights.size() && !flag[x+1][y] && heights[x+1][y]>=heights[x][y]){
            dfs(heights,flag,x+1,y);
        }
        if(y-1>=0 && !flag[x][y-1] && heights[x][y-1]>=heights[x][y]){
            dfs(heights,flag,x,y-1);
        }
        if(y+1<heights[0].size() && !flag[x][y+1] && heights[x][y+1]>=heights[x][y]){
            dfs(heights,flag,x,y+1);
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        vector<vector<bool>> flag1(n,vector<bool>(m)),flag2(n,vector<bool>(m));
        vector<vector<int>> res;
        for(int i=0;i<n;i++){
            dfs(heights,flag1,i,0);
        }
        for(int i=0;i<m;i++){
            dfs(heights,flag1,0,i);
        }
        for(int i=0;i<n;i++){
            dfs(heights,flag2,i,m-1);
        }
        for(int i=0;i<m-1;i++){
            dfs(heights,flag2,n-1,i);
        }
        for(int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if(flag1[i][j] && flag2[i][j]) res.push_back({i,j});
            }
        }
		return res;
    }
};