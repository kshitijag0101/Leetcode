class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<vector<int>> res;
        vector<pair<int,int>> cd;
        for(auto x:buildings){
            cd.push_back({x[0],-1*x[2]});  
            cd.push_back({x[1],x[2]}); 
        }
        sort(cd.begin(),cd.end());
        multiset<int,greater<int>> pq;
        pq.insert(0);
        int prev=0;
        for(auto &x:cd){
            int value=x.first;
            int height=x.second;
            if(height<0) pq.insert(-height); 
            else pq.erase(pq.find(height));
            int top=*pq.begin();  
            if(prev!=top){
                res.push_back({value,top});  
                prev=top;
            }
                
        }
        return res;
    }
};