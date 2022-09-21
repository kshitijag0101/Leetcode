class Solution {
public:
    string multiply(string num1, string num2) {
       if (num1=="0" || num2=="0") {
            return "0";
        }
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int n=num1.size()+num2.size();
        string res(n,'0');
        for(int i=0;i<num2.size();i++){
            int digit2=num2[i]-'0';
            for(int j=0;j<num1.size();j++){
                int digit1=num1[j]-'0';
                int numzeroes=i+j;
                int carry=res[numzeroes]-'0';
                int multiplication=digit1*digit2+carry;
                res[numzeroes]=(multiplication%10)+'0';
                res[numzeroes+1]+=(multiplication/10);
            }
        }
        if(res.back()=='0'){
            res.pop_back();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};