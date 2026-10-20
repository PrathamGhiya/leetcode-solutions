class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        
        // Method 1
        int i=0, j=i+1;
        while(i<nums.size()-1){
            if(nums[i] + nums[j] == target){
                return {i,j};
                // break;
            }
            if(j==nums.size()-1){
                i++;
                j=i+1;
            }
            else j++;
        }
        return {};

        // Method 2
        // int j;
        // for(int i=0;i<nums.size()-1;i++){
        //     int complement = target - nums[i];
        //     auto address = find(nums.begin()+i+1,nums.end(),complement);      // 'find' holds the address of what it gets and not the index
        //     if(address!=nums.end()){
        //         j = distance(nums.begin(),address);
        //         return {i,j};
        //     }
        // }
        // return {};
    }
    // Both has TC O(n^2)
};