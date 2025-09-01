class Solution {
public:
    bool checkIfPangram(string sentence) {
        if (sentence.size() < 26) return false;

        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        for (char c : alphabet) {
            if (sentence.find(c) == string::npos) {
                return false; // this letter is missing
            }
        }
        return true;
    }
};
