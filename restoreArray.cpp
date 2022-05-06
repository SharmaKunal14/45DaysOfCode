class Solution {
public:
        unordered_map<int, vector<int>> mp;
    vector<int> ans;
    set<int> S;
    void dfs(int i){
        ans.push_back(i);
        S.insert(i);
        
        for(auto x: mp[i]){
            if(S.find(x) == S.end()) dfs(x);
        }
    }
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        for(int i = 0; i < adjacentPairs.size(); i++){
            int x = adjacentPairs[i][0];
            int y = adjacentPairs[i][1];
            mp[x].push_back(y);
            mp[y].push_back(x);
        }
        
        
        for(auto x: mp){
            if(x.second.size() == 1 && S.find(x.first) == S.end()) dfs(x.first);
        }
        
        return ans;

    }
};