class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Store last index of each character (ASCII size = 256)
        // Initialized with -1 meaning "not seen yet"
        vector<int> index(256, -1);

        int maxLen = 0;   // stores the maximum substring length
        int start = -1;   // left boundary of current window (substring)

        // Traverse the string one character at a time
        for (int i = 0; i < s.size(); i++) {
            // If this character was seen after 'start',
            // move the start pointer to its last seen position
            if (index[s[i]] > start) {
                start = index[s[i]];
            }

            // Update the last seen index of current character
            index[s[i]] = i;

            // Current window length = i - start
            // Compare with maxLen and update
            maxLen = max(maxLen, i - start);
        }

        return maxLen; // final result
    }
};
