class Solution {
public:
    string tripletoword(int num){
        string last="",middle="",first="";
        switch(num%10){
            case 0:
                last="Zero";
                break;
            case 1:
                last="One";
                break;
            case 2:
                last="Two";
                break;
            case 3:
                last="Three";
                break;
            case 4:
                last="Four";
                break;
            case 5:
                last="Five";
                break;
            case 6:
                last="Six";
                break;
            case 7:
                last="Seven";
                break;
            case 8:
                last="Eight";
                break;
            case 9:
                last="Nine";
                break;
        }
        if(num>9){
            switch((num/10)%10){
                case 1:
                    if(last=="Zero"){
                        last="Ten";
                        middle="";
                    }
                    else if(last=="One"){
                        last="Eleven";
                        middle="";
                    }
                    else if(last=="Two"){
                        last="Twelve";
                        middle="";
                    }
                    else if(last=="Three"){
                        last="Thirteen";
                        middle="";
                    }
                    else if(last=="Four"){
                        last="Fourteen";
                        middle="";
                    }
                    else if(last=="Five"){
                        last="Fifteen";
                        middle="";
                    }
                    else if(last=="Six"){
                        last="Sixteen";
                        middle="";
                    }
                    else if(last=="Seven"){
                        last="Seventeen";
                        middle="";
                    }
                    else if(last=="Eight"){
                        last="Eighteen";
                        middle="";
                    }
                    else if(last=="Nine"){
                        last="Nineteen";
                        middle="";
                    }
                    break;
                case 2:
                    middle="Twenty";
                    break;
                case 3:
                    middle="Thirty";
                    break;
                case 4:
                    middle="Forty";
                    break;
                case 5:
                    middle="Fifty";
                    break;
                case 6:
                    middle="Sixty";
                    break;
                case 7:
                    middle="Seventy";
                    break;
                case 8:
                    middle="Eighty";
                    break;
                case 9:
                    middle="Ninety";
                    break;
            }
        }
        if(num>99){
            switch((num/100)%10){
                case 1:
                    first="One Hundred";
                    break;
                case 2:
                    first="Two Hundred";
                    break;
                case 3:
                    first="Three Hundred";
                    break;
                case 4:
                    first="Four Hundred";
                    break;
                case 5:
                    first="Five Hundred";
                    break;
                case 6:
                    first="Six Hundred";
                    break;
                case 7:
                    first="Seven Hundred";
                    break;
                case 8:
                    first="Eight Hundred";
                    break;
                case 9:
                    first="Nine Hundred";
                    break;
            }
        }
        if(middle=="" && first==""){
            return last=="Zero" ? "":last;
        }
        else if(middle!="" && first==""){
            return last=="Zero" ? middle:middle+" "+last;
        }
        else if(middle=="" && first!=""){
            return last=="Zero" ? first:first+" "+last;
        }
        else{
            return last=="Zero" ? first+" "+middle:first+" "+middle+" "+last;
        }
    }
    string numberToWords(int num) {
        if(num==0) return "Zero";
        string res=tripletoword(num);
        num=num/1000;
        string val=tripletoword(num);
        if(num!=0 && val!=""){
            res=val+" Thousand "+res;
        }
        num=num/1000;
        val=tripletoword(num);
        if(num!=0 && val!=""){
            res=val+" Million "+res;
        }
        num=num/1000;
        val=tripletoword(num);
        if(num!=0 && val!=""){
            res=val+" Billion "+res;
        }
        while(res.back()==' '){
            res.pop_back();
        }
        return res;
    }
};