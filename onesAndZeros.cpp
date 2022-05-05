class Solution {
public:

    int dp[601][101][101];
    vector<string> strs;
    int ans(int ind, int m, int n){
        if(ind == -1) return 0;
        if(m <= 0 && n <= 0) return 0;
        if(dp[ind][m][n] != -1) return dp[ind][m][n];
        
        int c0 = 0,  c1 = 0;
        for(auto x: strs[ind]){
            if(x == '0') c0++;
            else c1++;
        }
        
        if(c0 <= m && c1 <= n){
            dp[ind][m][n] = max(1+ans(ind -1, m - c0, n - c1), ans(ind - 1, m, n));
        }
        else dp[ind][m][n] = ans(ind -1, m, n);
        
        return dp[ind][m][n];
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        this->strs = strs;
       memset(dp,-1,sizeof(dp));
        return ans(strs.size() - 1, m,n);
    }
};