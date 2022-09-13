class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0,N=nums.size();
        for(int i=0;i<N;i++){
            sum+=nums[i];
        }
        if(sum%2!=0) return false;
        bool dp[sum/2+1][N+1];
        for(int i=0;i<=N;i++){
            dp[0][i]=true;
        }
        for(int i=1;i<=sum/2;i++){
            dp[i][0]=false;
        }
        for(int i=1;i<=sum/2;i++){
            for(int j=1;j<=N;j++){
                dp[i][j]=dp[i][j-1];
                if(i>=nums[j-1]){
                    dp[i][j]=dp[i][j] || dp[i-nums[j-1]][j-1];
                }
            }
        }
        return dp[sum/2][N];
    }
};