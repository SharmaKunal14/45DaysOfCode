class Solution {
public:
    int minDeletions(string s) {
        map<int, int> freqOcc;
        unordered_map<char,int> letterOcc;
        for(auto x : s){
            letterOcc[x]++;
        }
        int unique = letterOcc.size();
        
        for(auto x : letterOcc){
            freqOcc[x.second]++;
        }

        int freqLen = freqOcc.size();
        int minLen;
        int cost = 0;
        for(auto x: freqOcc){
            cout << x.first << " " << x.second << '\n';
            minLen = x.first - 1;
            while(freqOcc.count(minLen) && minLen != 0) minLen--; 
            if(x.second > 1){
                while(x.second != 1){
                    if(minLen == 0){
                         cost += x.first;
                         x.second--;
                    }
                       
                    else if(freqOcc.count(minLen) == 0){
                        cost += x.first - minLen;
                        freqOcc[minLen] = 1;
                        minLen--;
                        x.second--;
                    }
                    else minLen--;
                   
                }
            }
        }
        return cost;
    }
};