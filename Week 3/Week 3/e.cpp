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
        int a[n][n - 1];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n - 1; ++j)
            {
                cin >> a[i][j];
            }
        }
        map<int, int> mp;
        for (int i = 0; i < n; ++i)
        {
            // cout<<"a "<<i<<' '<<0<<"="<<a[i][0]<<'\n';
            mp[a[i][0]]++;
        }
        // cout<<"bad1\n";
        // for(auto i = mp.begin(); i!=mp.end(); i++){
        //     cout<<i->first<<' '<<i->second<<'\n';
        // }
        // cout<<"bad\n";
        int x1 = mp.begin()->first;
        int x2 = mp.begin()->second;
        int y1 = next(mp.begin(), 1)->first;
        int y2 = next(mp.begin(), 1)->second;
        // cout<<x1<<' '<<x2<<' '<<y1<<' '<<y2<<'\n';

        vector<int> v;
        if (x2 > y2)
        {
            v.push_back(x1);
            v.push_back(y1);
        }
        else
        {
            v.push_back(y1);
            v.push_back(x1);
        }
        int h = 0;
        for (int i = 1; i < n - 1; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (a[j][i] != v.back())
                {
                    v.push_back(a[j][i]);
                    break;
                }
            }
        }
        for (int i : v)
        {
            cout << i << ' ';
        }
        cout << '\n';
    }
    return 0;
}