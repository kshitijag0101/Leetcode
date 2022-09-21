class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top=0,bottom=n-1;
        int left=0,right=n-1;
        int val=1;
        vector<vector<int>> res(n,vector<int>(n));
        while (top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                res[top][i]=val;
                val++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                res[i][right]=val;
                val++;
            }
            right--;
            for(int i=right;i>=left;i--){
                res[bottom][i]=val;
                val++;
            }
            bottom--;
            for(int i=bottom;i>=top;i--){
                res[i][left]=val;
                val++;
            }
            left++;
        }    
        return res;
    }
};