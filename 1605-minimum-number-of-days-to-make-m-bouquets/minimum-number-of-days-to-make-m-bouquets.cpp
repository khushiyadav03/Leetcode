class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();

        if((long long)m * k > n) 
            return -1;

        int start = *min_element(bloomDay.begin(), bloomDay.end());
        int end = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = end;

        while(start <= end){
            int mid = start + (end - start) / 2;

            int boq = 0, flower = 0;
            for(int i = 0; i<n; i++){
                if(bloomDay[i] <= mid){
                    flower++;
                    if(flower == k){
                        boq++;
                        flower = 0;
                    }
                } else {
                    flower = 0;
                }
            }

            if(boq >= m){
                ans = mid;
                end = mid -1;
            } else {
                start = mid + 1;
            }
        }

        return ans;
    }
};