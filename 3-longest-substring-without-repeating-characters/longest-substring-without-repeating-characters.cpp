class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> ans;
        int left = 0, maxlen = 0;

        for(int i = 0; i<s.size(); i++){
            while(ans.count(s[i])){
                ans.erase(s[left]);
                left++;
            }

            ans.insert(s[i]);

            maxlen = max(maxlen, i - left + 1);
        }

        return maxlen;
    }
};