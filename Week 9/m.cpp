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
        sort(a, a + n);
        vector<int> cnt(n + 1, 0);
        for (int i = 0; i < n; ++i)
        {
            cnt[a[i]]++;
        }
        vector<int> v1, v0;
        for (int i = 0; i < n+1; ++i)
        {
            if (cnt[i] == 1)
            {
                v1.push_back(i);
            }
            if (cnt[i] == 0)
            {
                v0.push_back(i);
            }
        }
        if (!v0.empty())
            sort(v0.begin(), v0.end());
        if (!v1.empty())
            sort(v1.begin(), v1.end());
        int ans = -1;
        if (v1.size() > 1 && v0.size() > 0)
        {
            int x = v0[0];
            int y = v1[1];
            ans = min(x, y);
        }
        else{
            ans = v0[0];
        }
        cout<<ans<<'\n';
    }
    return 0;
}