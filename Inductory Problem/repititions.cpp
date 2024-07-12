#include<bits/stdc++.h>
using namespace std;

int32_t main() {
    string s; cin>>s;
    int i = 0;
    int n = s.size();
    int ans = 0;
    while(i<n) {
        char c = s[i];
        int count = 0;
        while(i<n and c==s[i]) {
            count++;
            i++;
        }
        ans = max(ans, count);
    }
    cout<<ans;
    return 0;
}