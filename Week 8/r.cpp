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
        int a, b;
        cin >> a >> b;
        while (1)
        {
            int g = __gcd(a, b);
            if (g == 1)
            {
                break;
            }
            b /= g;
        }
        if (b == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}