class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<score.size();i++){
            pq.push({score[i],i});
        }
        vector<string> res(score.size());
        vector<string> v={"Gold Medal","Silver Medal","Bronze Medal"};
        int i=0;
        while(pq.size()>0){
            pair<int,int> p=pq.top();
            pq.pop();
            if(i<3){
                res[p.second]=v[i];
                i++;
            }
            else{
                res[p.second]=to_string(i+1);
                i++;
            }
        }
        return res;
    }
};