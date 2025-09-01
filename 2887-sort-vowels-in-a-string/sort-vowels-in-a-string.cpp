class Solution {
public:
    string sortVowels(string s) {
        string vowels = "aeiouAEIOU";
        vector<char> vow;    // store vowels
        vector<char> t;      // store result with placeholders

        // Step 1: Separate vowels and placeholders
        for(char c : s){
            if(vowels.find(c) != string::npos){ // vowel check
                vow.push_back(c);
                t.push_back('#'); // placeholder
            } else {
                t.push_back(c);
            }
        }

        // Step 2: Sort vowels by ASCII
        sort(vow.begin(), vow.end());

        // Step 3: Fill vowels back in order
        int j = 0;
        for(int i = 0; i < t.size(); i++){
            if(t[i] == '#'){
                t[i] = vow[j++];
            }
        }

        // Step 4: Convert vector<char> to string
        return string(t.begin(), t.end());
    }
};
