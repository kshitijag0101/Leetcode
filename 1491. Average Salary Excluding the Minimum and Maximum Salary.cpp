class Solution {
public:
    double average(vector<int>& salary) {
        int maxi=INT_MIN,mini=INT_MAX,sum=0;
        for(int x:salary){
            maxi=maxi>x?maxi:x;
            mini=mini<x?mini:x;
            sum+=x;
        }
        return (double)(sum-mini-maxi)/(salary.size()-2);
    }
};