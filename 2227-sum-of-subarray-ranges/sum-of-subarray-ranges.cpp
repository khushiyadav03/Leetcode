class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            int l = nums[i], s = nums[i];
            for(int j = i+1; j < n; j++) {
                l = max(l, nums[j]); 
                s = min(s, nums[j]);
                sum += (long long)(l - s);
            }
        }
        return sum;
    }
};
