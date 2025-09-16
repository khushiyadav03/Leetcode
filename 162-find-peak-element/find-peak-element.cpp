class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int max = INT_MIN;
        int index = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] > max){
                max = nums[i];
                index = i;
            }
        }

        return index;
    }
};