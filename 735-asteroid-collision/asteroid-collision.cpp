class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for(int a : asteroids){
            bool destroyed = false;

            while(!st.empty() && st.top() > 0 && a < 0){
                if(abs(st.top()) < abs(a)){
                    st.pop();
                    continue;
                } else if(abs(st.top()) == abs(a)){
                    st.pop();
                    destroyed = true;
                    break;
                } else {
                    destroyed = true;
                    break;
                }
            }
            if(!destroyed){
                st.push(a);
            }
        }

        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};