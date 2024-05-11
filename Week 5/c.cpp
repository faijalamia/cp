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
        string ans = "";
        for (int i = n - 1; i >= 0; --i)
        {
            if (s[i] == '0')
            {
                string a = "";
                a.push_back(s[i - 2]);
                a.push_back(s[i - 1]);
                int b = stoi(a);
                // cout<<b<<'\n';
                ans.push_back(b - 1 + 'a');
                i -= 2;
            }
            else
            {
                int b = s[i] - '0';
                ans.push_back(b - 1 + 'a');
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << '\n';
    }
    return 0;
}