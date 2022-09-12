class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int low=0,high=r*c-1,mid;
        while(low<=high){
            mid=low+(high-low)/2;
            int num=matrix[mid/c][mid%c];
            if(num==target){
                return true;
            }
            else if(num>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
};