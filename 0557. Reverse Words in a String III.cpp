class Solution {
public:
    string reverseWords(string s) {
        int space=-1;
        int n=s.size();
        for(int i=0;i<=n;i++){
            if(i==n || s[i]==' '){
                int low=space+1;
                int high=i-1;
                while(low<high){
                    char temp=s[low];
                    s[low]=s[high];
                    s[high]=temp;
                    low++;
                    high--;
                }
                space=i;
            }
        }
        return s;
    }
};