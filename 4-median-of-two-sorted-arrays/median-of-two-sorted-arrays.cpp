class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int size = n + m;

        vector<int> arr;
        arr.reserve(size);  // yaha reserve karna hai, size initialize nahi

        // nums1 insert
        for (int i = 0; i < n; i++) {
            arr.push_back(nums1[i]);
        }

        // nums2 insert
        for (int i = 0; i < m; i++) {   // <-- yaha 0 se start karna tha
            arr.push_back(nums2[i]);
        }

        // sort merged array
        sort(arr.begin(), arr.end());

        // find median
        if (size % 2 == 1) {
            return arr[size / 2];   // odd case
        } else {
            return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;  // even case
        }
    }
};
