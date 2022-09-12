class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> res;
        for(int i=0,j=0;i<words.size();j=++i){
            int width=0;
            while(i<words.size() && width+words[i].length()+(i-j)<=maxWidth){
                width+=words[i].length();
                i++;
            }
            i--;
            string line;
            int sp=maxWidth-width;
            int gap=(i==j || i==words.size()-1?1:sp/(i-j));
            int extra=(i==j || i==words.size()-1?0:sp%(i-j));
            while(j<=i){
                if(!line.empty()){
                    line+=string(gap,' '),sp-=gap;
                    if(extra) line+=' ',extra--,sp--;
                }
                line+=words[j++];
            }
            line+=string(sp,' ');
            res.push_back(move(line));
        }
        return res;
    }
};