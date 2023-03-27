class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long int curr=0, ans=0, t=0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]==0) {
                curr++;
            } else {
                t= curr*(curr+1);
                ans += t/2;
                curr=0;
            }
        }
        t= curr*(curr+1);
        ans += t/2;
        return ans;
    }
};