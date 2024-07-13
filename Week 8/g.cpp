#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
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
        int x = a[i];
        set<int>s;
        for (int j = 2; j * j <= x; ++j)
        {
            if (x % j == 0)
            {
                s.insert(j);
                while (x % j == 0)
                {
                    x /= j;
                }
            }
        }
        if(x>1){
            s.insert(x);
        }
        for(int k: s){
            mp[k]++;
        }
    }
    int ans = 1;
    for (auto [p, q] : mp)
    {
        ans = max(ans, q);
    }
    cout << ans << '\n';
    return 0;
}