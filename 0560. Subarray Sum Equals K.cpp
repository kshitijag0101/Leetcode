class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int sum=0,res=0;
        mp[sum]=1;
        for(auto x:nums){
            sum+=x;
            if(mp.find(sum-k)!=mp.end()){
                res+=mp[sum-k];
            }
            mp[sum]++;
        }
        return res;
    }
};