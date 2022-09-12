class Solution {
public:
    int n,m;
    bool solve(vector<vector<char>>& board,int i,int j,string word,int k,vector<vector<int>>& vis){
        if(k==word.size()) return true;
        if(i>=n || i<0 || j>=m || j<0) return false;
        if(vis[i][j]==0){
            if(word[k]==board[i][j]){
                vis[i][j]=1;
                bool c1=solve(board,i+1,j,word,k+1,vis);
                bool c2=solve(board,i,j+1,word,k+1,vis);
                bool c3=solve(board,i-1,j,word,k+1,vis);
                bool c4=solve(board,i,j-1,word,k+1,vis);
                vis[i][j]=0;
                return(c1 || c2 || c3 || c4);
            }
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        n=board.size();
        m=board[0].size();
        bool check=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    vector<vector<int>> vis(n,vector<int>(m,0));
                    check=check || solve(board,i,j,word,0,vis);
                    if(check) return true;
                }
            }
        }
        return check;
    }
};