class Solution {
public:
    void generate(unordered_map<int,int>& mp,vector<int>& temp,vector<vector<int>>& res,int n){
        if(temp.size()==n){
            res.push_back(temp);
            return;
        }
        for(auto x:mp){
            if(x.second==0) continue;
            temp.emplace_back(x.first);
            mp[x.first]--;
            generate(mp,temp,res,n);
            temp.pop_back();
            mp[x.first]++;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        unordered_map<int,int> mp;
        for(auto x:nums) mp[x]++;
        generate(mp,temp,res,nums.size());
        return res;
    }
};