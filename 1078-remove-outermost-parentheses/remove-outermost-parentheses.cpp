class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int depth = 0;

        for (char c : s) {
            if (c == '(') {
                if (depth > 0) result += c; // keep only if not outermost
                depth++;
            } else {
                depth--;
                if (depth > 0) result += c; // keep only if not outermost
            }
        }

        return result;
    }
};
