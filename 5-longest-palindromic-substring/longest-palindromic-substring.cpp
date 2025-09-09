class Solution {
public:
    // two-pointer palindrome checker (O(length_of_substring))
    bool isPalindrome(const string &s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++; r--;
        }
        return true;
    }

    // brute-force: check all substrings
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";
        string ans = "";

        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                if (isPalindrome(s, i, j)) {
                    int len = j - i + 1;
                    if (len > (int)ans.size()) {
                        ans = s.substr(i, len);
                    }
                }
            }
        }
        return ans;
    }
};
