class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int row=mat.size(),col=mat[0].size();
        vector<vector<int>> dist(row,vector<int>(col,INT_MAX-100000));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]==0){
                    dist[i][j]=0;
                }
                else{
                    if(i>0){
                        dist[i][j]=min(dist[i][j],dist[i-1][j]+1);
                    }
                    if(j>0){
                        dist[i][j]=min(dist[i][j],dist[i][j-1]+1);
                    }
                }
            }
        }
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=0;j--){
                if(i<row-1){
                    dist[i][j]=min(dist[i][j],dist[i+1][j]+1);
                }
                if(j<col-1){
                    dist[i][j]=min(dist[i][j],dist[i][j+1]+1);
                }
            }
        }
        return dist;
    }
};