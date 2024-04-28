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
        string s1, s2;
        if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; ++i)
            {
                s1 += s[i];
                s2 += s[n - 1 - i];
            }
            //cout << s1 << ' ' << s2 << '\n';
            int cnt1 = 0, cnt2 = 0;
            for (int i = 0; i < n / 2; ++i)
            {
                if (s1[i] != s2[i])
                {
                    cnt1++;
                }
                else
                {
                    cnt2++;
                }
            }
            for (int i = 0; i <= n; ++i)
            {
                if (i < cnt1)
                    cout << 0;
                else if (i == cnt1)
                    cout << 1;
                else
                {
                    if ((i - cnt1) % 2 == 0 && cnt2 > 0)
                    {
                        cout << 1;
                        cnt2--;
                    }
                    else
                        cout << 0;
                }
            }
        }
        else
        {
            for (int i = 0; i < n / 2; ++i)
            {
                s1 += s[i];
                s2 += s[n - 1 - i];
            }
            //cout << s1 << ' ' << s2 << '\n';
            int cnt1 = 0, cnt2 = 0;
            for (int i = 0; i < n / 2; ++i)
            {
                if (s1[i] != s2[i])
                {
                    cnt1++;
                }
                else
                {
                    cnt2+=2;
                }
            }
            for (int i = 0; i <= n; ++i)
            {
                if (i < cnt1)
                    cout << 0;
                else if (i == cnt1)
                    cout << 1;
                else
                {
                    if (cnt2 >=0)
                    {
                        cout << 1;
                        cnt2--;
                    }
                    else
                        cout << 0;
                }
            }
        }
        cout<<'\n';
    }
    return 0;
}