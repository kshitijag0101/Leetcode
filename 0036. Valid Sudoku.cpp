class Solution {
public:
    bool isSafe(vector<vector<char>>& board,int row,int col){
        int ch=board[row][col];
        board[row][col]='.';
        for(int i=0;i<9;i++){
            if(board[i][col]==ch) return false;
            if(board[row][i]==ch) return false;
        }
        int boxrow=row-row%3;
        int boxcol=col-col%3;
        for(int r=boxrow;r<boxrow+3;r++){
            for(int c=boxcol;c<boxcol+3;c++){
                if(board[r][c]==ch) return false;
            }
        }
        board[row][col]=ch;
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i=0;i<9;i++){
            for (int j=0;j<9;j++){
                if (board[i][j]!='.' && !isSafe(board,i,j)){
                    return false;
                }
            }
        }
        return true;
    }
};