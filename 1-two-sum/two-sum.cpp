class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        int i=0, j=i+1;
        while(i<nums.size()-1){
            if(nums[i] + nums[j] == target){
                return {i,j};
                break;
            }
            if(j==nums.size()-1){
                i++;
                j=i+1;
            }
            else j++;
        }
        return {};
    }
};