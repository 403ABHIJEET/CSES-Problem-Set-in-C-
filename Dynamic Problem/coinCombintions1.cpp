#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

unordered_map<int, int> dp;
int find(int n, vector<int> &v, int len)
{
    if (dp.find(n) != dp.end())
        return dp[n];
    if (n == 0)
        return 1;
    int ans = 0;
    for (int i = 0; i < len; i++)
    {
        if (n >= v[i])
        {
            ans += find(n - v[i], v, len);
            ans %= mod;
        }
    }
    return dp[n] = ans;
}

int32_t main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        v.push_back(y);
    }
    cout << find(n, v, v.size());
    return 0;
}