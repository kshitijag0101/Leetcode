class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> mp;
        for(int i=0;i<matches.size();i++){
            if(mp.find(matches[i][0])==mp.end()){
                mp[matches[i][0]]=0;
            }
            mp[matches[i][1]]++;
        }
        vector<vector<int>> res(2);
        for(auto x:mp){
            if(x.second==0){
                res[0].push_back(x.first);
            }
            if(x.second==1){
                res[1].push_back(x.first);
            }
        }
        return res;
    }
};