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
        if (b==1)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            cout << a << ' ' << a * b << ' ' << a + (a * b) << '\n';
        }
    }
    return 0;
}