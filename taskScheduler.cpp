class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int len = tasks.size();
        if(n==0) return len;
        
        unordered_map<int, int> mp;
        for(auto x : tasks){
            mp[x - 'A']++;
        }
        int max_task_freq = INT_MIN, cnt = 0;
        for(auto x: mp){
            if(x.second > max_task_freq){
                max_task_freq = x.second;
                cnt = 1;
            }
            else if(max_task_freq == x.second) cnt++;
        }
        int days = (max_task_freq - 1) * (n+1) + cnt;
        return  days > len? days: len;
    }
   
};