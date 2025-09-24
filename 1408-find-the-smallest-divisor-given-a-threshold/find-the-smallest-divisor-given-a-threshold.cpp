class Solution {
public:
    int smallestDivisor(vector<int>& arr, int k) {
        int start = 1;
        int end = *max_element(arr.begin(), arr.end());
        int ans = end;

        while(start <= end){
            int mid = start + (end - start) / 2;

            long long sum = 0;
            for(int x : arr){
                sum += (x + mid - 1) / mid; /// ceil(x/mid)
            }

            if(sum <= k){
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return ans;
    }
};