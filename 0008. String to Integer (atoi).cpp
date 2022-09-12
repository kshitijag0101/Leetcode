class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        bool flag=false;
        long long num=0;
        while(s[i]==' '){
            i++;
        }
        if(s[i]=='-'){
            flag=true;
            i++;
        }
        else if(s[i]=='+'){
            i++;
        }
        while(s[i]>='0' && s[i]<='9'){
            num=num*10+(s[i]-'0');
            if(num>=INT_MAX ||  num<=INT_MIN) break;
            i++;
        }
        if(flag==true){
            num*=-1;
        }
        if(num>INT_MAX) return INT_MAX;
        if(num<INT_MIN) return INT_MIN;
        return num;
    }
};