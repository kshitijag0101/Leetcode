class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total=0,currmax=0,currmin=0,maxi=INT_MIN,mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
            currmax=max(currmax+nums[i],nums[i]);
            currmin=min(currmin+nums[i],nums[i]);
            maxi=max(maxi,currmax);
            mini=min(mini,currmin);
        }
        return maxi<0 ? maxi:max(maxi,total-mini);
    }
};