class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> left(n);
        vector<int> right(n);
        stack<int> st;

        const int MOD = 1e9+7;

        // left[i] = count of subarrays ending at i where arr[i] is min
        for(int i = 0; i<n; i++){
            int count = 1;
            while(!st.empty() && arr[st.top()] > arr[i]){  // strictly greater
                count += left[st.top()];
                st.pop();
            }
            left[i] = count;
            st.push(i);
        }

        while(!st.empty()) st.pop();

        // right[i] = count of subarrays starting at i where arr[i] is min
        for(int i = n-1; i>=0; i--){
            int count = 1;
            while(!st.empty() && arr[st.top()] >= arr[i]){  // notice >=
                count += right[st.top()];
                st.pop();
            }
            right[i] = count;
            st.push(i);
        }

        long long ans = 0;
        for(int i = 0; i<n; i++){
            long long contrib = (1LL * arr[i] * left[i] * right[i]) % MOD;
            ans = (ans + contrib) % MOD;
        }

        return (int)ans;
    }
};
