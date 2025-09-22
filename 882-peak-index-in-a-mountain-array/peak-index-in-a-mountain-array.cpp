class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0, high = arr.size() - 1;
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            
            if (arr[mid] < arr[mid + 1]) {
                // Peak is on the right
                low = mid + 1;
            } else {
                // Peak is on the left or at mid
                high = mid;
            }
        }
        return low; // or high, both same at the end
    }
};
