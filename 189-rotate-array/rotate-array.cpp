class Solution {
public:
    void swapping(vector<int> &nums, int i, int j){
        while(i<j){
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        int n = nums.size()-1;
        swapping(nums,0,n);
        swapping(nums,0,k-1);
        swapping(nums,k,n);

        for(int ele : nums) cout<<ele<<" ";
    }
};