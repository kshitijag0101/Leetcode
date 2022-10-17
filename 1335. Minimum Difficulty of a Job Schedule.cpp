class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n=jobDifficulty.size();
        vector<vector<int>> dp(n+1,vector<int>(d+1,INT_MAX));
        dp[0][0]=0;
        for(int i=1;i<=n;i++){
            int maxi=jobDifficulty[i-1]; 
            for(int j=i-1;j>=0;j--){
                for(int day=1;day<=d;day++)
                    if(dp[j][day-1]!=INT_MAX)
                        dp[i][day]=min(dp[i][day],dp[j][day-1]+maxi);
                
                if(j-1>=0)
                    maxi=max(maxi,jobDifficulty[j-1]);
            }
        }
        return dp[n][d]==INT_MAX?-1:dp[n][d];
    }
};