class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for (char c : s) 
            freq[c]++;

        vector<pair<int,char>> vec;
        for (auto &p : freq) 
            vec.push_back({p.second, p.first});

        sort(vec.rbegin(), vec.rend()); // reverse sort directly

        string result;
        for (auto &p : vec) {
            result.append(p.first, p.second);
        }
        return result;
    }
};