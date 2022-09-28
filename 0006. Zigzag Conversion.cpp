class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string> rows(min(numRows,int(s.size())));
        int currow=0;
        bool down=false;
        for(char c:s){
            rows[currow]+=c;
            if(currow==0 || currow==numRows-1){
                down=!down;
            }
            currow+=down?1:-1;
        }
        string res;
        for(string row:rows){
            res+=row;
        }
        return res;
    }
};