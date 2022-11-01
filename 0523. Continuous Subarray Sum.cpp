class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int preSum=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            preSum+=nums[i];
            preSum%=k;
            if(preSum==0 && i) return true;
            if(mp.find(preSum)!=mp.end()){
                if(i-mp[preSum]>1) return true;
            }
            else mp[preSum]=i;
        }
        return false; 
    }
};