class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        long totalsum=0,currsum=0;
        for(int i=0;i<n;i++){
            totalsum+=nums[i];
        }
        int mini=INT_MAX;
        int ind;
        for(int i=0;i<n;i++){
            currsum+=nums[i];
            int a=currsum/(i+1);
            if(i==n-1){
                if(a<mini) return n-1;
                else break;
            }
            int b=(totalsum-currsum)/(n-i-1);
            int diff=abs(a-b);
            if(mini>diff){
                mini=diff;
                ind=i;
            }
        }
        return ind;
    }
};