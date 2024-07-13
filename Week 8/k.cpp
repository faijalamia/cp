#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    int mx = 0, mn = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }
    int d = 0;
    int cnt = 0;
    int sum = 0;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        d = (mx - a[i]);
        sum += d;
        v.push_back(d);
        if (mx != a[i])
        {
            cnt++;
        }
    }
    int gd = v[0];
    for (int i : v)
    {
        gd = __gcd(gd, i);
    }

    cout << sum / gd << ' ' << gd;
    return 0;
}