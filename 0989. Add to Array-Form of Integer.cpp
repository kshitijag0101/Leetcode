class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> res;
        int i=num.size()-1;
        int curr=k;
        while(i>=0 || curr>0){
            if(i>=0) curr+=num[i];
            res.push_back(curr%10);
            curr/=10;
            i--;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};