class Solution {
public:
    // Helper function: check karo ki Koko given speed 'k' se saare bananas h hours me khatam kar paati hai ya nahi
    bool canEatAll(vector<int>& piles, int h, int k) {
        long long hours = 0;  // total hours count karenge (long long use kiya overflow avoid karne ke liye)

        for (int pile : piles) {
            // Har pile ke liye hours = ceil(pile / k)
            // ceil ka formula = (pile + k - 1) / k  (integer division trick)
            hours += (pile + k - 1) / k;
        }

        // Agar total hours allowed h se kam ya equal hain toh true (possible)
        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;  // minimum speed possible = 1 banana per hour
        int high = *max_element(piles.begin(), piles.end()); // max pile jitni hai utna max speed
        int ans = high; // initially assume max hi answer hoga

        // Binary search
        while (low <= high) {
            int mid = low + (high - low) / 2; // mid speed check karenge

            if (canEatAll(piles, h, mid)) {
                // Agar mid speed pe ho gaya kaam, toh yeh ek valid answer hai
                ans = mid;        
                high = mid - 1;   // lekin chhoti speed bhi try karenge, isliye high ko left le aao
            } else {
                // Agar mid speed pe possible nahi, toh speed slow thi
                low = mid + 1;    // ab speed badhao
            }
        }

        // jab loop khatam hoga tab ans me minimum valid speed hoga
        return ans;
    }
};
