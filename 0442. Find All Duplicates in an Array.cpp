class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        unordered_set<int> s;
        s.insert(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(s.find(nums[i])!=s.end()){
                res.push_back(nums[i]);
            }
            else{
                s.insert(nums[i]);
            }
        }
        return res;
    }
};