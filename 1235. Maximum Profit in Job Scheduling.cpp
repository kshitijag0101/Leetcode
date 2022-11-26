class Solution {
public:
    int find(int i,vector<vector<int>>& jobs,vector<int>& startTime,int n,vector<int>& dp){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        int index=lower_bound(startTime.begin(),startTime.end(),jobs[i][1])-startTime.begin();
        int pick=jobs[i][2]+find(index,jobs,startTime,n,dp);
        int notpick=find(i+1,jobs,startTime,n,dp);
        return dp[i]=max(pick,notpick);
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n=startTime.size();
        vector<vector<int>> jobs;
        vector<int> dp(n,-1);
        for(int i=0;i<n;i++){
            jobs.push_back({startTime[i],endTime[i],profit[i]});
        }
        sort(jobs.begin(),jobs.end());
        sort(startTime.begin(),startTime.end());
        return find(0,jobs,startTime,n,dp);
    }
};