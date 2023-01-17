class Solution {
public:
    int minFlipsMonoIncr(string s) {
        if(s.size()==0) return 0;
        int countone=0,countzero=0;
        for(auto x:s){
            if(x=='0'){
                if(countone==0) continue;
                else countzero++;
            }
            else countone++;
            if(countzero>countone) countzero=countone;
        }
        return countzero;
    }
};