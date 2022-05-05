class Solution {
public:
    int memo[100000];
    int ans(int n){
        if(memo[n] != -1) return memo[n];
        if(n <= 1) return 1;
        return memo[n] = ans(n-1) + ans(n-2);        
    }
    int climbStairs(int n) {
        memset(memo,-1,sizeof(memo));
        return ans(n);
    }
};