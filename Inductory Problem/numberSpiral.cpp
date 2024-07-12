#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long y, x;
        cin >> y >> x;
        long long ans;
        if (x >= y) {
            if (x % 2 == 1) {
                ans = x * x - y + 1;
            } else {
                ans = (x - 1) * (x - 1) + y;
            }
        } else {
            if (y % 2 == 1) {
                ans = (y - 1) * (y - 1) + x;
            } else {
                ans = y * y - x + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
