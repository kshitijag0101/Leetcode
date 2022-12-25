class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int r=matrix.size(),c=matrix[0].size();
        int res=INT_MAX;
        if(r==0 || c==0) return 0;
        for(int i=1;i<r;i++){
            for(int j=0;j<c;j++){
                int mini=matrix[i-1][j];
                if(j>0){
                    mini=min(mini,matrix[i-1][j-1]);
                }
                if(j<c-1){
                    mini=min(mini,matrix[i-1][j+1]);
                }
                matrix[i][j]+=mini;
            }
        }
        for(int j=0;j<c;j++)
            res=min(res,matrix[r-1][j]);
        return res;
    }
};