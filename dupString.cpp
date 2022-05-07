#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for(auto x: s){
        mp[x]++;
    }

    for(auto x: mp){
        if(x.second > 1) cout << x.first << " " << x.second << '\n';
    }
}