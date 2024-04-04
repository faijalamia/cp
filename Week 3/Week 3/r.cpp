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
        bool fre[n + 1];
        memset(fre, false, sizeof(fre));
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int indx = -1;
        for (int i = n - 1; i >= 0; --i)
        {
            if (fre[a[i]])
            {
                indx = i;
                break;
            }
            else
            {
                fre[a[i]] = true;
            }
        }
        cout << indx+1 << '\n';
    }
    return 0;
}