class Solution {
public:
    int dfs(vector<vector<int>>& grid,int i,int j){
        int cnt=0;
        if(grid[i][j]==1){
            cnt++;
            grid[i][j]=0;
            if(i-1>=0) cnt+=dfs(grid,i-1,j);
            if(j-1>=0) cnt+=dfs(grid,i,j-1);
            if(i+1<grid.size()) cnt+=dfs(grid,i+1,j);
            if(j+1<grid[0].size()) cnt+=dfs(grid,i,j+1);
        }
        return cnt;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int mx=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    int count=dfs(grid,i,j);
                    mx=max(mx,count);
                }
            }
        }
        return mx;
    }
};