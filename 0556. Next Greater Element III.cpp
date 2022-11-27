class Solution {
public:
    int nextGreaterElement(int n) {
        string s=to_string(n);
        int size=s.size();
        int i=size-2;
        while(i>=0 && s[i]>=s[i+1]){
            i--;
        }
        if(i<0){
            return -1;
        }
        int j=size-1;
        while(j>=0){
            if(s[j]>s[i]){
                break;
            }
            j--;
        }
        swap(s[i],s[j]);
        reverse(s.begin()+i+1,s.end());
        long long res=stol(s);
        if(res>INT_MAX || res<INT_MIN){
            return -1;
        }
        return res;
    }
};