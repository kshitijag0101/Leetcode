class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> res;
        int start=0;
        int end=arr.size()-1;
        while(end-start>=k){
            if(abs(arr[start]-x)>abs(arr[end]-x)) start++;
            else end--;
        }
        for(int i=start;i<=end;i++) {
            res.push_back(arr[i]);
        }
        return res;
    }
};