class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // if mid element is greater than next element,
            // peak is in the left half (including mid)
            if (nums[mid] > nums[mid + 1]) {
                high = mid;
            } 
            // otherwise, peak is in the right half
            else {
                low = mid + 1;
            }
        }

        // when low == high, we found a peak
        return low;
    }
};
