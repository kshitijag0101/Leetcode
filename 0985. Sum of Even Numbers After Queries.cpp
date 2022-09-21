class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> res;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                sum+=nums[i];
            }
        }
        for(int i=0;i<queries.size();i++){
            int val=queries[i][0],index=queries[i][1];
            if(nums[index]%2==0) sum-=nums[index];
            nums[index]+=val;
            if(nums[index]%2==0) sum+=nums[index];
            res.push_back(sum);
        }
        return res;
    }
};