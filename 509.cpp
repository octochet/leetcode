class Solution {
public:
    int fib(int n) {
        int sec=0, first=1;
        int sum;
        for(int i=0; i<n-1; i++) {
            sum=sec+first;
            sec=first;
            first=sum;
        }
        return sum;
    }
};