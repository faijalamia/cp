#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < (1 << n); ++i)
    {
        vector<int> v;
        int sum = 0;
        for (int j = 0; j < n; ++j)
        {
            if ((1 << j) & i)
            {
                v.push_back(a[j]);
                sum += a[j];
            }
        }
        sort(v.begin(), v.end());
        if (v.size() >= 2 && sum >= l && sum <= r && v.back() - v.front() >= x)
        {
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}