class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0,j=matrix[0].size()-1;i<matrix.size() && j>=0;){
            if(matrix[i][j]==target)
                return true;
            if(matrix[i][j]>target){
                j--;
            }
            else if(matrix[i][j]<target){
                i++;
            }
        }
        return false;
    }
};