class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int mini=INT_MAX,res=-1;
        for(int i=0;i<points.size();i++){
            if(x==points[i][0] || y==points[i][1]) {
                int t=abs(y-points[i][1])+abs(x-points[i][0]);
                res=mini>t?i:res;
                mini=mini<t?mini:t;
            }
        }
        return res;
    }
};