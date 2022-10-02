class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size()==0){
            return (n==1?1:-1);
        }
        int k=10101;
        vector<int> degree(k,0);
        int size=trust.size();
        for(int i=0;i<size;i++){
            degree[trust[i][0]]--;
            degree[trust[i][1]]++;
        }
        for(int i=0;i<size;i++){
            if(degree[trust[i][1]]==n-1){
                return trust[i][1];
            }
        }
        return -1;
    }
};