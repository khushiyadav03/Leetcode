class Solution {
public:
    string shortestPalindrome(string s) {
        int n = s.size();
        int j = n - 1;   // pointer from the end
        int i = 0;       // pointer from the start

        // Step 1: Find the longest palindromic prefix
        while (j >= 0) {
            if (s[i] == s[j]) {
                i++;   // characters match, move start pointer
            }
            j--;       // always move end pointer
        }

        // Now, i = length of the longest palindromic prefix
        if (i == n) return s;  // whole string is already a palindrome

        // Step 2: Get the suffix that is not part of palindrome
        string suffix = s.substr(i);  // from i to end
        string revSuffix = suffix;
        reverse(revSuffix.begin(), revSuffix.end());

        // Step 3: Recurse on the prefix (or iterative call here)
        // shortestPalindrome(prefix) + suffix part
        return revSuffix + shortestPalindrome(s.substr(0, i)) + suffix;
    }
};
