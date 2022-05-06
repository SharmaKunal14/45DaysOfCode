class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k == num.size()) return "0";
        
        stack<char> st;
        for(auto c: num){
            while(!st.empty() && k && st.top() > c){
                st.pop();
                k--;
            }
            if(!st.empty() || c != '0') st.push(c);
        }
        
        while(!st.empty() && k){
            st.pop();
            k--;
        }
        
        if(st.empty()) return "0";
        
        int end = st.size();
        int i = end - 1;
        while(!st.empty()){
            num[i--] = st.top();
            st.pop();
        }
        
        return num.substr(0,end);
       
    }
};