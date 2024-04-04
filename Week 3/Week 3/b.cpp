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
        int n, q;
        cin >> n >> q;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int pre[n + 1];
        pre[0] = 0;
        for (int i = 0; i < n; ++i)
        {
            pre[i + 1] = a[i] + pre[i];
        }
        // for (int i = 0; i <= n; ++i)
        // {
        //     cout << pre[i] << ' ';
        // }
        // cout<<'\n';
        int s = pre[n];
        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            int x = pre[r] - pre[l - 1];
            int y = k * (r - l + 1);
            if((s-x+y)%2==1) cout<<"YES\n";
            else cout<<"NO\n";
            //cout <<s<<' '<<x << ' ' << y << '\n';
        }
    }
    return 0;
}