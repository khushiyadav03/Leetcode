class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        int a = -1, b = -1;  // initialize with -1

        // scan from left until first target
        while (start < nums.size()) {
            if (nums[start] == target) {
                a = start;
                break;
            }
            start++;
        }

        // scan from right until last target
        while (end >= 0) {
            if (nums[end] == target) {
                b = end;
                break;
            }
            end--;
        }

        return {a, b};
    }
};
