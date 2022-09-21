class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<vector<int> >& res, vector<int>& temp, int index){
        if(target==0){
            res.push_back(temp);
            return;
        }
        while(index<candidates.size() && target-candidates[index]>= 0){
            temp.push_back(candidates[index]);
            backtrack(candidates,target-candidates[index],res,temp,index);
            index++;
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end()); 
        candidates.erase(unique(candidates.begin(),candidates.end()),candidates.end());
        vector<int> temp;
        vector<vector<int>>res;
        backtrack(candidates,target,res,temp,0);
        return res;
    }
};