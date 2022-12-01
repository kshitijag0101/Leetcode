class Solution {
public:
    bool halvesAreAlike(string s) {
        int mid;
        if(s.length()%2==0){
            mid=s.length()/2;
        }
        else{
            mid=s.length()/2+1;
        }
        int countvowel1=0,countvowel2=0;
        for(int i=0;i<mid;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                countvowel1++;
            }
        }
        for(int i=mid;i<s.length();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                countvowel2++;
            }
        }
        return countvowel1==countvowel2;
    }
};