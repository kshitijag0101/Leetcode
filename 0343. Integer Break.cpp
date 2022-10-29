class Solution {
public:
    int integerBreak(int n) {
        vector<int> prev(n+1,1),curr(n+1,0);
		for(int i=2;i<n;i++){
			for(int sum=0;sum<=n;sum++){
				int notpick=prev[sum];
				int pick=0;
				if(sum>=i) pick=i*curr[sum-i];
				curr[sum]=max(pick,notpick);
			}
			prev=curr;
		}
		return prev[n];
    }
};