#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    map<string, bool> mp;
    vector<string> v;
    while (t--)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    for (int i = v.size() - 1; i >= 0; --i)
    {
        if (mp.find(v[i]) == mp.end())
        {
            cout << v[i][v[i].size() - 2];
            cout << v[i][v[i].size() - 1];
            mp[v[i]] = true;
        }
    }
    return 0;
}