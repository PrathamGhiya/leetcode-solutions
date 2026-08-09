class Solution {
public:

    // It will be more efficient because it's Time-Complexity is  'O(n)'

    void swapping(vector<int> &nums, int i, int j){
        while(i<j){
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {

        k %= nums.size();           // If 'k' is greater than 'n' then it will find the less no. of rotations, which will be equal array, when it is rotated 'k' times

        int n = nums.size()-1;
        swapping(nums,0,n);
        swapping(nums,0,k-1);
        swapping(nums,k,n);

        for(int ele : nums) cout<<ele<<" ";
    }
    

    //OR


    // It will be less efficient because it's Time-Complexity is  'O(k*n)'

    // int temp;
    // int i = nums.size();
    // while(k!=0){
    //     temp = nums[i];
    //     for(int j=nums.size()-1;j>=1;j--){
    //         nums[j] = nums[j-1];
    //     }
    //     nums[0] = temp;
    //     k--;
    // }

    // for(int i=0;i<k/2;i++,k--){
    //     swap(nums[i],nums[k]);
    // }

    // for(int ele : nums) cout<<ele<<" ";

    // for(int i=0;i<nums.size();i++){
    //     cout<<nums[i]<<" ";
    // }
};