class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(auto x:s){
            mp[x]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto x:mp){
            pq.push({x.second,x.first});
        }
        string res="";
        while(pq.size()>0){
            int n=pq.top().first;
            while(n>0){
                res+=pq.top().second;
                n--;
            }
            pq.pop();
        }
        return res;
    }
};