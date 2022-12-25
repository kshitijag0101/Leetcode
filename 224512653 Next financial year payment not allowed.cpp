class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size(),m=queries.size();
        sort(nums.begin(),nums.end());
        vector<int> prefixsum;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            prefixsum.push_back(sum);
        }
        vector<int> res(m,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(prefixsum[j]<=queries[i]) res[i]=j+1;
                else break;
            }
        }
        return res;
    }
};