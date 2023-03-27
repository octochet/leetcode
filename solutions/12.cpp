class Solution {
public:
    string intToRoman(int n) {
       string rom="";
        while(n!=0) {
            if(n>=1000){
                rom=rom+'M';
                n=n-1000;
            }
            else if(n>=900) {
                rom=rom+"CM";
                n=n-900;
            }
            else if(n>=500) {
                rom=rom+'D';
                n=n-500;
            }
            else if(n>=400) {
                rom=rom+"CD";
                n=n-400;
            }
            else if(n>=100) {
                rom=rom+'C';
                n=n-100;
            }
            else if(n>=90) {
                rom=rom+"XC";
                n=n-90;
            }
            else if(n>=50) {
                rom=rom+'L';
                n=n-50;
            }
            else if(n>=40) {
                rom=rom+"XL";
                n=n-40;
            }
            else if(n>=10) {
                rom=rom+'X';
                n=n-10;
            }
            else if(n>=9) {
                rom=rom+"IX";
                n=n-9;
            }
            else if(n>=5) {
                rom=rom+'V';
                n=n-5;
            }
            else if(n>=4) {
                rom=rom+"IV";
                n=n-4;
            }
            else {
                rom=rom+'I';
                n=n-1;
            }
        }
        return rom; 
    }
};