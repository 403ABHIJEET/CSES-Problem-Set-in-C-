#include<bits/stdc++.h>
using namespace std;

long long get_sum(int n) {
    long long sum = 0;
    if(n%2) {
        sum += n/2;
        sum *= (n+1);
    } else {
        sum += (n+1)/2;
        sum *= n;
    }
    return sum;
}

int32_t main() {
    int n; cin>>n;
    long long sum = get_sum(n);
    if(sum%2) {
        cout<<"NO";
        return 0;
    }
    sum /= 2;
    vector<bool> mark(n+1, true);
    vector<int> v;
    for(int i=n; i>=1; i--) {
        if(sum==0) break;
        if(i<=sum) {
            sum -= i;
            v.push_back(i);
            mark[i] = false;
        } 
    }
    if(sum) {
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    cout<<v.size()<<endl;
    for(int i=v.size()-1; i>=0; i--) cout<<v[i]<<" ";
    cout<<endl;
    cout<<n-v.size()<<endl;
    for(int i=1; i<=n; i++) {
        if(mark[i]) cout<<i<<" ";
    }
    return 0;
}