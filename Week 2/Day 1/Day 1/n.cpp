#include <bits/stdc++.h>
using namespace std;
#define int long long
bool is_palindrome(string s, int n)
{
    map<char, int> mp;
    for (int i = 0; i < n; ++i)
    {
        mp[s[i]]++;
    }
    int cnt = 0;
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        if (i->second % 2 == 1)
        {
            cnt++;
        }
    }
    if (cnt > 1)
    {
        return false;
    }
    else
        return true;
}
int32_t main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        if(n==1 || n-k==1) cout<<"YES\n";
        else{
            map<char, int> mp;
            for (int i = 0; i < n; ++i)
            {
                mp[s[i]]++;
            }
            int cnt = 0;
            for (auto i = mp.begin(); i != mp.end(); i++)
            {
                if (i->second % 2 == 1)
                {
                    cnt++;
                }
            }
            if (cnt <= k || cnt-k==1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}