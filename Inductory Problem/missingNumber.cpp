#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n; cin>>n;
    int sum = 0;
    for(int i=0; i<n-1; i++) {
        int x; cin>>x;
        sum += x;
    }
    int total = (n*(n+1))/2;
    cout<<total-sum<<endl;
    return 0;
}