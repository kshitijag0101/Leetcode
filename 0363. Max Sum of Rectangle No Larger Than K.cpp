class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int row=matrix.size(),col=matrix[0].size();
        int res=INT_MIN;
        for(int l=0;l<col;l++){
            vector<int> sum(row);
            for(int r=l;r<col;r++){
                for(int i=0;i<row;i++){
                    sum[i]+=matrix[i][r];
                }
                set<int> s={0};
                int rsum=0;
                for(int x:sum){
                    rsum+=x;
                    auto it=s.lower_bound(rsum-k);
                    if(it!=s.end()){
                        res=max(res,rsum-*it);
                    }
                    s.insert(rsum);
                }
            }  
        }
        return res;
    }
};