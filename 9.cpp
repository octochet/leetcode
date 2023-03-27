class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) {
            return false;
        }
        long long int temp1=0, temp2=x;
        while(temp2>0) {
            temp1 = 10*temp1 + temp2%10;
            temp2 /= 10;
        }

        return temp1==x;
    }
};