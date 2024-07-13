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
        bool ans = true;
        for (int i = 1; i <= n; ++i)
        {
            int x;
            cin >> x;
            bool ok = false;
            for (int j = i + 1; j >= 2; --j)
            {
                if (x % j)
                {
                    ok = true;
                    break;
                }
            }
            ans&=ok;
        }
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}