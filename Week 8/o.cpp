#include <bits/stdc++.h>
using namespace std;
#define int long long
bool is_prime(int n)
{
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
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
        int d;
        cin >> d;
        int n = d + 1;
        while (is_prime(n) != true)
        {
            n++;
        }
        int m = n+d;
        while (is_prime(m) != true)
        {
            m++;
        }
        //cout<<n<<' '<<m<<'\n';
        cout << n * m << '\n';
    }
    return 0;
}