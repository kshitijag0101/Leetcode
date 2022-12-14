class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1,j=b.length()-1;
        string res="";
        int carry=0;
        while(i>=0 || j>=0 || carry){
            if(i>=0){
                carry+=a[i]-'0';
                i--;
            }
            if(j>=0){
                carry+=b[j]-'0';
                j--;
            }
            res+=(carry%2+'0');
            carry=carry/2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};