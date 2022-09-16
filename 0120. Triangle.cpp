class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> dp(n);
        for(int i=n-1;i>=0;i--){
            dp[i]=triangle[i];
            if(i==n-1) continue;
            for(int j=0;j<=i;j++){
                dp[i][j]+=min(dp[i+1][j],dp[i+1][j+1]);
            }
        }
        return dp[0][0];
    }
};