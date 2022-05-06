#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >> k;
    vector<int> v;
    int num;
    cin >> num;
    while(num){
        v.push_back(num);
        cin >> num;
    }

    sort(v.begin(),v.end());
    int last = v.size() - 1;
    int cost = 0;
    for(int i = 0; i < v.size(); i++){
        if(last < i) break;
        cost += v[i];
        last -= k;
    }

    cout << cost;
}