class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(begin(intervals),end(intervals));
        int row=intervals.size();
        int i=0;
        while(i+1<row){
            vector<int> temp(2);
            if((intervals[i+1][0]<=intervals[i][0] && intervals[i+1][1]>=intervals[i][0] )||
                (intervals[i+1][0]<=intervals[i][1] && intervals[i+1][1]>=intervals[i][1]) ||
                (intervals[i+1][0]>=intervals[i][0] && intervals[i+1][0]<=intervals[i][1])
            ){
                if(intervals[i+1][0]<=intervals[i][0])
                    temp[0]=(intervals[i+1][0]);
                else
                    temp[0]=(intervals[i][0]);
                if(intervals[i+1][1]>=intervals[i][1])
                    temp[1]=(intervals[i+1][1]);
                else 
                    temp[1]=(intervals[i][1]);  
                intervals[i+1][0]=temp[0];
                intervals[i+1][1]=temp[1];
            }
            else
                ans.push_back({intervals[i][0],intervals[i][1]});
            i++;
        }
        ans.push_back({intervals[row-1][0],intervals[row-1][1]});
        return ans;
    }
};
        

