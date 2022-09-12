class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>> pq;
        int i=1;
        for(int j=0;j<nums.size();j++){
            if(nums[j]>0){
                if(nums[j]>i){
                    pq.push(nums[j]);
                }
                if(i==nums[j]){
                    i++;
                }
            }
        }
        while(!pq.empty()){
            if(pq.top()==i) i++;
            pq.pop();
        }
        return i;
    }
};