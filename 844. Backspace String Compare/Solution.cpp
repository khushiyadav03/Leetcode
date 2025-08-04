#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> S, T;

        for (char i : s) {
            if (i != '#') {
                S.push(i);
            } else if (!S.empty()) {
                S.pop();
            }
        }

        for (char i : t) {
            if (i != '#') {
                T.push(i);
            } else if (!T.empty()) {
                T.pop();
            }
        }

        // Now compare both stacks manually
        if (S.size() != T.size()) return false;

        while (!S.empty()) {
            if (S.top() != T.top()) return false;
            S.pop();
            T.pop();
        }

        return true;
    }
};
