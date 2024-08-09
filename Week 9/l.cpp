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
    int n, k, q;
    cin >> n >> k >> q;
    int a[k + 1], b[k + 1];
    a[0] = 0;
    b[0] = 0;
    for (int i = 1; i <= k; ++i)
    {
      cin >> a[i];
    }
    for (int i = 1; i <= k; ++i)
    {
      cin >> b[i];
    }
    while (q--)
    {
      int d;
      cin >> d;
      auto it = upper_bound(a + 1, a + k, d);
      int idx = it - a;
      // cout<<"idx = "<<idx<<'\n';
      int dis = a[idx - 1];
      int ans = b[idx - 1] + (d - a[idx - 1]) * (b[idx] - b[idx - 1]) / (a[idx] - a[idx - 1]);
      // if (d > dis)
      // {
      //   int v = ((a[idx] - a[idx - 1])) / (b[idx] - b[idx - 1]);
      //   int s = (d - dis);
      //   ans += (s / v);
      // }
      cout << ans << ' ';
    }
    cout << '\n';
  }
  return 0;
}