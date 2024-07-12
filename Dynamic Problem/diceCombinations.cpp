#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

unordered_map<int, int> dp;
int find(int n)
{
    if (dp.find(n) != dp.end())
        return dp[n];
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    int ans = 0;
    for (int i = 1; i <= 6; i++)
    {
        ans += find(n - i);
        ans %= mod;
    }
    return dp[n] = ans % mod;
}

int32_t main()
{
    int n;
    cin >> n;
    cout << find(n);
    return 0;
}