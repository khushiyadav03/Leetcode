class Solution {
public:
    int maxDepth(string s) {
        int dep = 0;
        int maxDep = 0;

        for(char c : s){
            if(c == '('){
                dep += 1;
                maxDep = max(maxDep, dep);
            } else if (c == ')'){
                dep -= 1;
                maxDep = max(maxDep, dep);
            } else {
                continue;
            }
        }

        return maxDep;
    }
};