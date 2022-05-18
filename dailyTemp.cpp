class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        
        
        vector<int> ans(temperatures.size());
        for(int i = temperatures.size() - 1; i >= 0; i--){
            while(!st.empty() && temperatures[st.top()] <= temperatures[i])
                st.pop();
            int inter = st.empty() ? 0: st.top() - i;
        st.push(i);
        ans[i] = inter;
        }
        
    return ans;      
        
    }
};