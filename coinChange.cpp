class Solution {
public:

    int coinChange(vector<int>& coins, int amount) {

      int dp[100000];
        dp[0] = 0;
        for(int i = 1;i <= amount; i++){
            dp[i] = INT_MAX;
            for(auto c: coins){
                
                if(c <= i &&  dp[i - c] != INT_MAX){
                    dp[i] = min(dp[i], dp[i-c] + 1);
                }
            }
        }
        if(dp[amount] != INT_MAX) return dp[amount];
        
        return -1;
    }
};