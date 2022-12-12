class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<mat.size();i++){
            int sum=0,j=0;
            for(int j=0;j<mat[0].size();j++){
                sum+=mat[i][j];
            }
            pq.push({sum,i});
        }
        vector<int> res;
        while(k>0){
            res.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return res;
    }
};