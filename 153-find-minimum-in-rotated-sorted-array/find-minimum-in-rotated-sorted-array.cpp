class Solution {
public:
    int findMin(vector<int>& nums) {
        int a = INT_MAX;
        for(int n : nums){
            if(n < a){
                a = n;
            }
        }

        return a;
    }
};