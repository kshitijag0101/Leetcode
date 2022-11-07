class Solution {
public:
    string freqAlphabets(string s) {
        int i=s.length()-1,st;
        string res="";
        while(i>=0){
            if(s[i]=='#')
                st=stoi(s.substr(i-2,2)),i-=3;
            else{
                st=(s[i]-'0');
                i--;
            }
            res=char(96+st)+res;
        }
        return res;
    }
};