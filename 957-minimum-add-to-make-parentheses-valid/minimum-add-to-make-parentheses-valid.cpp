class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0;       // counts unmatched '('
        int insertions = 0; // counts how many '(' we need to add for unmatched ')'

        for (char c : s) {
            if (c == '(') {
                open++;  // one more '(' waiting for a ')'
            } 
            else { // c == ')'
                if (open > 0) {
                    open--; // match this ')' with a previous '('
                } 
                else {
                    insertions++; // no '(' available, so we need to insert one
                }
            }
        }

        // 'open' left unmatched '(' need ')' insertions
        return insertions + open;
    }
};
