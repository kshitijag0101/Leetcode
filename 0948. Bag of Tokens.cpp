class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end()); 
        int gain=0;   
        int score=0,maxscore=0;
        int spend=tokens.size()-1;     
        while(gain<=spend){
            if(power>=tokens[gain]){ 
                score+=1;
                maxscore=max(maxscore,score); 
                power-=tokens[gain];
                gain++;
            }
            else if(score>=1){        
                power+=tokens[spend];
                score-=1;
                spend--;
            }
            else
                break;                 
        }
        return maxscore;
    }
};