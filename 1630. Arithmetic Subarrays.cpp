class Solution {
public:
    bool isArithmetic(vector<int>& nums,int low,int high){
        int maxi=INT_MIN,mini=INT_MAX;
        for(int i=low;i<=high;i++){
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
        }
        if(mini==maxi){
            return true;
        }
        if((maxi-mini)%(high-low)!=0){
            return false;
        }
        int diff=(maxi-mini)/(high-low);
        vector<bool> visited(high-low+1,false);
        for(int i=low;i<=high;i++){
            if((nums[i]-mini)%diff!=0){
                return false;
            }
            int ind=(nums[i]-mini)/diff;
            if(visited[ind]){
                return false;
            }
            visited[ind]=true;
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n=l.size();
        vector<bool> res(n,false);
        for(int i=0;i<n;i++){
            if(r[i]-l[i]+1==2){
                res[i]=true;
            }
            else if(isArithmetic(nums,l[i],r[i])){
                res[i]=true;
            }
        }
        return res;
    }
};