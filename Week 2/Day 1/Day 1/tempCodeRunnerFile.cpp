#include <bits/stdc++.h>
using namespace std;
// #define int long long
int32_t main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        if (n == 1 || a[0] == a[n - 1])
            cout << 0 << '\n';
        else
        {
            int mx = 0;
            for (int i = 0; i < n - 1; ++i)
            {
                if (a[i] != a[i + 1])
                {
                    mx = i + 1;
                    break;
                }
            }
            int r = n - mx, ans = 0;
            // cout<<"mx1 = "<<mx<<'\n';
            // cout<<"r1 = "<<r<<'\n';
            while (1)
            {
                if (mx >=r)
                {
                    ans += (r + 1);
                    break;
                }
                r -= mx;
                ans += (mx + 1);
                mx *= 2;
                if (mx >=r)
                {
                    ans += (r + 1);
                    break;
                }
            }
            cout << ans << '\n';
        }
    }
    return 0;
}