#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int m, n;
        cin >> m >> n;
        m--,n--;
        int x[m], y[m];
        for(int i = 0; i < m ; i++) cin >> x[i];
        for(int i = 0; i < n; i++) cin >> y[i];

        sort(x,x+m, greater<int>());
        sort(y,y+n, greater<int>());
        int hr = 1, vr = 1;
        int i = 0, j = 0;
        int ans = 0;
        while(i < m && j < n){
            if(x[i] > y[j]){
                ans += (x[i] * vr);
                hr++; i++;
            }
            else{
                 ans += (y[j] * hr);
                vr++; j++;
            }
        }

        while(i < m ) ans += (x[i] * vr), i++;
        while(j < n ) ans += (y[j] * hr), j++;
        cout << ans << endl;
    }
}