class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        unordered_set<int> zeroes;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==0){
                zeroes.insert(i);
                if(zeroes.size()>1) return vector<int>(nums.size(),0);
            } 
            else product*=nums[i];
        }
        if(zeroes.size()==1){
            vector<int> sol(nums.size(),0);
            sol[*(zeroes.begin())]=product;
            return sol;
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=product/nums[i];
        }
        return nums;
    }
};