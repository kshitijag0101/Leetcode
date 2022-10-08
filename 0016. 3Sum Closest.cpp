class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        long long res=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int low=i+1;
            int high=nums.size()-1;
            while(low<high){
                long long currentSum=nums[low]+nums[high]+nums[i];
                if(abs(currentSum-target)<=abs(res-target)) 
                    res=currentSum;
                if(currentSum>target) high--;
                else low++;
                while(low<nums.size()-1 and nums[low]==nums[low+1])
                    low++;
            }
        }
        return res;
    }
};