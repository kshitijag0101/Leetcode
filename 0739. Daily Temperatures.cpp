class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> res(n);
        int hottest=0;
        for(int curr=n-1;curr>=0;curr--){
            int currtemp=temperatures[curr];
            if(currtemp>=hottest){
                hottest=currtemp;
                continue;
            }
            int days=1;
            while(temperatures[curr+days]<=currtemp){
                days+=res[curr+days];
            }
            res[curr]=days;
        }
        return res;
    }
};