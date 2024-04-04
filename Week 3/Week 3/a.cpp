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
        string s;
        cin >> s;
        for (int i = 0; i < n; ++i)
        {
            s[i] = tolower(s[i]);
        }
        if (s[0] != 'm' || s[n - 1] != 'w')
        {
            cout << "NO\n";
        }
        else
        {
            string s1 = "";
           //unordered_map<char, int> mp;
            for (int i = 0; i < n; ++i)
            {
                if(s[i]!=s[i+1]){
                    s1+=s[i];
                }
                //mp[s[i]]++;
            }
            
            if (s1 == "meow")
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}