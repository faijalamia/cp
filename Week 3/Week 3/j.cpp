#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, q, k;
        cin >> n >> q >> k;
        // int a[n];
        vector<int> a;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        a.push_back(INT_MAX);
        int cnt = 0, ans = 0;
        for (int i = 0; i < n + 1; ++i)
        {
            if (a[i] <= k)
            {
                cnt++;
            }
            else
            {
                // cout<<"cnt0 = "<<cnt<<'\n';
                if (cnt >= q)
                {
                    cnt -= (q - 1);
                    // cout<<"cnt1 = "<<cnt<<'\n';
                    ans += (cnt * (cnt + 1)) / 2;
                    // cout<<"ans = "<<ans<<'\n';
                }
                cnt = 0;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}