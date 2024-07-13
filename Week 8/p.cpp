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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; ++i)
        {
            int k = a[i];
            for (int j = 2; j * j <= k; ++j)
            {
                if (k % j == 0)
                {
                    while (k % j == 0)
                    {
                        mp[j]++;
                        k /= j;
                    }
                }
            }
            if (k > 1)
            {
                mp[k]++;
            }
        }
        bool ok = true;
        for (auto [x, y] : mp)
        {
            if (y % n != 0)
            {
                ok = false;
                break;
            }
            // cout<<x<<"->"<<y<<'\n';
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}