class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int tot = 0;
        int sum = (n*(n+1))/2;
        for(int i=0;i<n;i++){
            tot += nums[i];
        }
        tot = sum - tot;
        return {tot};
    }
};