class Solution {
public:
    string largestOddNumber(string num) {
        // Traverse from the rightmost digit
        for (int i = num.size() - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 == 1) {
                // Return substring from 0 to i (inclusive)
                return num.substr(0, i + 1);
            }
        }
        return "";  // no odd digit found
    }
};
