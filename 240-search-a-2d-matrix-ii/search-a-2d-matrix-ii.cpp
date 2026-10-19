class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int n = arr.size(), m = arr[0].size();

        // TC - O(m+n)
        int i = 0, j = m-1;
        while(i<n && j>=0){
            if(arr[i][j] > target) j--;
            else if(arr[i][j] < target) i++;
            else return true;
        }
        return false;

        // TC - O(mn)
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(arr[i][j] == target) return true;
        //     }
        // }
        // return false;
    }
};