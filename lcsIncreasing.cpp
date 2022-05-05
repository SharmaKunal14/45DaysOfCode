class Solution {
public:
//     vector<int> nums;
//     int dp(int i, int j){
//         if(i == j) return 1;
//         int ans = 0;
//         if(i < j - 1 && nums[i + 1] > nums[i]){
//             ans = max(1 + dp(i + 1, j), dp(i+1,j));
//         }
//         else{
//             ans = dp(i + 1, j);
//         }
        
//         return ans;
//     }
    int lengthOfLIS(vector<int>& nums) {
        
        int ans[3000];
        ans[0] = 1;
        for(int i = 1;i < nums.size(); i++){
            ans[i] = 1;
            for(int j = 0; j < i; j++){
                if(nums[j] < nums[i]) ans[i] = max(ans[i], ans[j] + 1);
            }
        }
        
        int fans = INT_MIN;
        for(int i = 0; i < nums.size(); i++) fans = max(fans, ans[i]);
        
        return fans;
    }
};


