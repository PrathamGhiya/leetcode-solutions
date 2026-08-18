class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0, k=0;
        vector<int> c(m+n);
        // int c[m+n];
        while(i<m && j<n){
            if(nums1[i] < nums2[j]) c[k++] = nums1[i++];
            else c[k++] = nums2[j++];
        }
        while(i<m) c[k++] = nums1[i++];
        while(j<n) c[k++] = nums2[j++];
        for(int x=0; x<m+n; x++){
            nums1[x] = c[x];
        }
    }
};