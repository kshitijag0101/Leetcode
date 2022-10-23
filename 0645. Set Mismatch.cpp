class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res;
        int dup=-1,missing=1;
        for (int n:nums){
            if(nums[abs(n)-1]<0)
                dup=abs(n);
            else
                nums[abs(n)-1]*=-1;
        }
        res.push_back(dup);
        for(int i=1;i<nums.size();i++) {
            if(nums[i]>0)
                missing=i+1;
        }
        res.push_back(missing);
        return res;
    }
};