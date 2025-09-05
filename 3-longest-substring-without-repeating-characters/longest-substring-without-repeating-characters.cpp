class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxLen = 0;

        // Outer loop: starting index of substring
        for (int i = 0; i < n; i++) {
            vector<bool> seen(256, false); // track visited chars
            int currLen = 0;

            // Inner loop: expand substring from i
            for (int j = i; j < n; j++) {
                if (seen[s[j]]) {
                    // If char already seen → stop
                    break;
                } else {
                    seen[s[j]] = true;
                    currLen++;
                    maxLen = max(maxLen, currLen);
                }
            }
        }
        return maxLen;
    }
};
