class Solution {
public:
    string Thousands[3] = {"M","MM","MMM"};
    string Hundreds[9]  = {"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string Tens[9]      = {"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string Units[9]     = {"I","II","III","IV","V","VI","VII","VIII","IX"};
    int endidx(int i) {
        if(i==9 || i==6 || i==4 || i==2) return 2;
        else if(i==8) return 4;
        else if(i==7 || i==3) return 3;
        else return 1; 
    }
    int romanToInt(string s) {
        int sum=0,i,j,k,l,idx=0;
        for(i=3; i>0; i--) {
            if(s.substr(idx,i)==Thousands[i-1]) {
                sum += i*1000;
                idx+=i;
                break;
            }
        }
        
        for(j=9; j>0; j--) {
            if(s.substr(idx,endidx(j))==Hundreds[j-1]) {
                sum += j*100;
                idx+=endidx(j);
                break;
            }
        }
        
        for(k=9; k>0; k--) {
            if(s.substr(idx,endidx(k))==Tens[k-1]) {
                sum += k*10;
                idx+=endidx(k);
                break;
            }
        }

        for(l=9; l>0; l--) {
            if(s.substr(idx,endidx(l))==Units[l-1]) {
                sum += l;
                break;
            }
        }
        return sum;
    }
};