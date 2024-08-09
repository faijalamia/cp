#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        vector<int> v1, v2;
        for (int i = 1; i <= n; ++i)
        {
            if (i % 2 == 1)
            {
                v1.push_back(i);
            }
            else
            {
                v2.push_back(i);
            }
        }
        reverse(v1.begin(), v1.end());
        reverse(v2.begin(), v2.end());
        for (int i : v1)
        {
            cout << i << ' ';
        }
        for (int i : v2)
        {
            cout << i << ' ';
        }
    }

    return 0;
}