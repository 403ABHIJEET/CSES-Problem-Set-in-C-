#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n; cin>>n;
    while(n!=1) {
        cout<<n<<" ";
        if(n%2) {
            n *= 3;
            n++;
        } else n /= 2;
    }
    cout<<1<<endl;
    return 0;
}