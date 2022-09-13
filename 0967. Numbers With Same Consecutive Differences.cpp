class Solution {
public:
    void dfs(int n,int num,int k,vector<int>& res){
        if(n==0){
            res.push_back(num);
            return;
        }
        vector<int> nextdigit;
        int lastdigit=num%10;
        nextdigit.push_back(lastdigit+k);
        if(k!=0){
            nextdigit.push_back(lastdigit-k);
        }
        for(int digit:nextdigit){
            if(digit>=0 && digit<10){
                int newnum=num*10+digit;
                dfs(n-1,newnum,k,res);
            }
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> res;
        if(n==1){
            res={0,1,2,3,4,5,6,7,8,9};
            return res;
        }
        for(int i=1;i<10;i++){
            dfs(n-1,i,k,res);
        }
        return res;
    }
};