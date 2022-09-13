class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int sum=0,res=0;
        for(int i=0;i<n;i++){
            sum+=cardPoints[i];
        }
        int win=n-k;
        int winsum=0;
        for(int i=0;i<win;i++){
            winsum+=cardPoints[i];
        }
        res=sum-winsum;
        for(int i=1;i<=(n-win);i++){
            winsum=winsum-cardPoints[i-1]+cardPoints[i+win-1];
            res=max(res,(sum-winsum));
        }
        return res;
    }
};