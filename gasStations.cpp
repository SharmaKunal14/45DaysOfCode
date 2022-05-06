class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int prev_cost = 0, curr = 0;
        int start = 0;
        for(int i = 0; i < gas.size(); i++){
            curr += gas[i] - cost[i];
            if(curr < 0){
                prev_cost += curr;
                curr = 0;
                start = i + 1;
            }
        }
        
        if(curr + prev_cost >= 0) return start;
        return -1;
        
    }
};