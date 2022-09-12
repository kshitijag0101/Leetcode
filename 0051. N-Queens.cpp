class Solution {
public:
    void solve(vector<string>& board,vector<vector<string>>& res,vector<int>& leftrow,vector<int>& upperDiagonal,vector<int>& lowerDiagonal,int n,int col){
        if(col==n){
            res.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(leftrow[row]==0 && lowerDiagonal[row+col]==0 && upperDiagonal[n-1+col-row]==0){
                board[row][col]='Q';
                leftrow[row]=1;
                lowerDiagonal[row+col]=1;
                upperDiagonal[n-1+col-row]=1;
                solve(board,res,leftrow,upperDiagonal,lowerDiagonal,n,col+1);
                board[row][col]='.';
                leftrow[row]=0;
                lowerDiagonal[row+col]=0;
                upperDiagonal[n-1+col-row]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        vector<int> leftrow(n,0),upperDiagonal(2*n-1,0),lowerDiagonal(2*n-1,0);
        solve(board,res,leftrow,upperDiagonal,lowerDiagonal,n,0);
        return res;
    }
};