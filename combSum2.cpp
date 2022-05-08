class Solution {
public:
    vector<int> candidates;
    int target;
    vector<int> inter;
    vector<vector<int>> ans;
    void calc(int index,int rem){
        if(rem == 0){
            ans.push_back(inter);
            return;
        }
         for(int i=index; i<candidates.size(); i++){
            if(i>index && candidates[i]==candidates[i-1]) continue;
            if(candidates[i] > rem) break;
            
            inter.push_back(candidates[i]);
            calc(i+1, rem-candidates[i]);
            inter.pop_back();
        }
    }
      
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        this->candidates = candidates;
        this->target = target;
        calc(0, target);
        return ans;
    }
};