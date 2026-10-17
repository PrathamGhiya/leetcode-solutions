class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr;

        // Creating Structure
        for(int i=1;i<=numRows;i++){
            arr.push_back(vector<int>(i,1));
        }

        // Output
        for(int i=2;i<arr.size();i++){
            for(int j=1;j<arr[i].size()-1;j++){
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }

        return arr;
    }
};