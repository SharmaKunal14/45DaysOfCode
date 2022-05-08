class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<vector<int>> freq(nums.size()+1);
        
        for(auto x: nums) mp[x]++;
        vector<int> ans;
        int maxFreq = INT_MIN, num;
        for(auto x: mp){
           freq[x.second].push_back(x.first);
        }
        for(int i = freq.size() - 1; i >= 0; i--){
            for(int j = 0; j < freq[i].size();j++){
                ans.push_back(freq[i][j]);
                k--;
                if(k == 0) return ans;
            }
        }
        
        return ans;
        
        
    }
};