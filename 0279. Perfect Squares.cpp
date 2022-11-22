class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            int mincount=INT_MAX;
            for(int j=1;j<=sqrt(i);j++){
                int currcount=1+dp[i-(j*j)];
                mincount=min(mincount,currcount);
            }
            dp[i]=mincount;
        }
        return dp[n];
    }
};
