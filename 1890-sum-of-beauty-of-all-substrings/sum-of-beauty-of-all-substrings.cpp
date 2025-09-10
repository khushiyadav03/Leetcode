class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int total = 0;

        for(int i = 0; i<n; i++){
            vector<int> freq(26, 0);
            for(int j = i; j<n; j++){
                freq[s[j] - 'a']++;

                int mx = 0;
                int mn = INT_MAX;

                for(int f : freq){
                    if(f > 0){
                        mx = max(mx, f);
                        mn = min(mn, f);
                    }
                }

                total += (mx - mn);
            }
        }

        return total;
    }
};