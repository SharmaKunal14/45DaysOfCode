class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        ans.push_back(0);
        int t[100001];
        t[0] = 0;
        for(int i = 1; i <= n; i++){
            t[i] = t[i/2] + i%2;
            ans.push_back(t[i]);
        }
        return ans;
    }
};