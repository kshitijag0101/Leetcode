class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp,temp2(2*n);
        for(int i=0;i<n;i++){
            temp.push_back(nums[i]);
        }
        for(int i=0;i<n;i++){
            temp.push_back(nums[i]);
        }
        stack<int> st;
        for(int i=temp.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=temp[i]){
                st.pop();
            }
            if(st.empty()){
                temp2[i]=-1;
            }
            else{
                temp2[i]=st.top();
            }
            st.push(temp[i]);
        }
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            res.push_back(temp2[i]);
        }
        return res;
    }
};