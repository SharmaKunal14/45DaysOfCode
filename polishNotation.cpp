class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(auto x: tokens){

             if(x == "+") {int n1 = s.top();
                s.pop();
                int n2 = s.top();
                s.pop();s.push(n1 + n2);}
                else if(x == "-") {int n1 = s.top();
                s.pop();
                int n2 = s.top();
                s.pop();s.push(n2 - n1);}
                else if(x == "*") {int n1 = s.top();
                s.pop();
                int n2 = s.top();
                s.pop();s.push(n1*n2);}
                else if(x =="/"){int n1 = s.top();
                s.pop();
                int n2 = s.top();
                s.pop();s.push(n2/n1);}
            else {
            int n = stoi(x);
                s.push(n);
        }
        }
        return s.top();
    }
};