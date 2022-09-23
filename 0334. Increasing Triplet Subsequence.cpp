class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        int left=INT_MAX;
        int right=INT_MAX;
        if(n<3) return false;
        for(int i=0;i<n;i++){
            if(nums[i]>right){
                return true;
            }
            else if(nums[i]>left && nums[i]<right){
                right=nums[i];
            }
            else if (nums[i]<left){
                left=nums[i];
            }
        }
        return false;
    }
};