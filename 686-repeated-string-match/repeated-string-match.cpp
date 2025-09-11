class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string repeated = a;
        int count = 1;

        // keep appending until repeated size >= b size
        while (repeated.size() < b.size()) {
            repeated += a;
            count++;
        }

        // check if b is now a substring
        if (repeated.find(b) != string::npos) {
            return count;
        }

        // maybe b starts in the end of repeated and continues in next repeat
        repeated += a;
        count++;

        if (repeated.find(b) != string::npos) {
            return count;
        }

        // not possible
        return -1;
    }
};
