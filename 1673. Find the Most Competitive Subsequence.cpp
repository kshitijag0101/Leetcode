class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        int del=nums.size()-k;
        vector<int>st;
        for(int x:nums){
            while(!st.empty() && x<st.back() && del){
                st.pop_back();
                del--;
            }
            st.push_back(x);
        }
        return vector<int>(st.begin(),st.begin()+k);
    }
};