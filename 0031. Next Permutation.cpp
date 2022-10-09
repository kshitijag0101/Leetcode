class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind=-1;
        for(int i=nums.size()-1;i>=1;i--){
            if(nums[i]>nums[i-1]){
                ind=i-1;
                break;
            }
        }
        if(ind==-1){
            sort(nums.begin(),nums.end());
            return;
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
        reverse(nums.begin()+ind+1,nums.end());  
    }
};