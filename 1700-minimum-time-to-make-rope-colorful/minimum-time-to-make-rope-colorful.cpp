class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        stack<int> st;
        int ans = 0;
        for (int i = 0; i < colors.size(); i++) {
            if (st.empty() || colors[i] != colors[st.top()]) {
                st.push(i);
            } else {

                if (neededTime[i] > neededTime[st.top()]) {
                    ans += neededTime[st.top()];
                    st.pop();
                    st.push(i);
                } else {
                    ans += neededTime[i];
                }
            }
        }
        return ans;
    }
};