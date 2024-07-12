#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    int n,x; cin>>n>>x;
    vector<int> v;
    for(int i=0; i<n; i++) {
        int y; cin>>y;
        v.push_back(y);
    }
    sort(v.begin(), v.end());
    vector<int> dp(x+1,x+1);
    dp[0] = 0;
    for(int i=1; i<x+1; i++) {
        for(int j=0; j<n; j++) {
            if(v[j]<=i) dp[i] = min(dp[i], 1+dp[i-v[j]]);       
        }
    }
    cout<<(dp[x]<x+1 ? dp[x] : -1);
    return 0;
}