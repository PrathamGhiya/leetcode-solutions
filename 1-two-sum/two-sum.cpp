class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        
        // Method 1 O(n) [1 Pass sol.]
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
    
    // Method 2 O(2n) = O(n) [2 Pass sol.]
    // int zeros = 0, ones = 0;
    // for(int i=0;i<arr.size();i++){
    //     if(arr[i] == 0) zeros++;
    //     else ones++;
    // }
    // for(int i=0;i<arr.size();i++){
    //     if(zeros!=0){
    //         arr[i] = 0;
    //         zeros--;
    //     }
    //     else{
    //         arr[i] = 1;
    //     }
    // }
};