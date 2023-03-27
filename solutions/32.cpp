class Solution {
public:
    int longestValidParentheses(string str) {
    int length=0, countleft=0, countright=0, max=0, original=0, j=0;
        for(int i=0; i<str.length(); i++){
            length=0;
            countleft=0;
            countright=0;
            if(str.at(i)=='('){
                original=i;
                j=i;
                while(j<str.length()){
                    if(str.at(j)=='(') {
                        length++;
                        countleft++;
                    }
                    if(str.at(j)==')'){
                        length++;
                        countright++;
                    }
                    if(countleft==countright){
                        if(length>max) max=length;
                    }
                    if(countright>countleft){
                        break;
                    }
                    j++;
                }
            }
        }
    return max;
}
};