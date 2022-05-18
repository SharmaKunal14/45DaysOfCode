class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1, s2;
        for(auto x: s){
            if(x == '#' && !s1.empty()){
            // cout << s1.top()  << '\n';
                
                s1.pop();
                
            }
            else if(x == '#' && s1.empty()) continue;
            else s1.push(x);
        }
        for(auto x: t){
            if(x == '#' && !s2.empty()) {
            // cout << s2.top()  << '\n';
                
                s2.pop();}
            else if(x == '#' && s2.empty()) continue;
            
            else s2.push(x);
        }
        while(!s1.empty() && !s2.empty()){
            // cout << s1.top() << " " << s2.top() << '\n';
            if(s1.top() == s2.top()){
                s1.pop();
                s2.pop();
            }
            else return false;
        }
        
        if(!s1.empty() || !s2.empty()) return false;
        
        return true;
    }
};