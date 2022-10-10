class Solution {
public:
    int binarysearch(vector<int>& nums,int target,bool firstindex){
        int res=-1;
        int l=0,r=nums.size()-1;
        while(l<=r){
        int mid=l+(r-l)/2;
        if (target>nums[mid])
            l=mid+1;
        else if(target<nums[mid])
            r=mid-1;
        else{
            res=mid;
            if(firstindex) r=mid-1;
            else l=mid+1;
        }
    }
    return res;
  }
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=binarysearch(nums,target,true);
        int end=binarysearch(nums,target,false);
        return vector<int>({start,end});
    }
};