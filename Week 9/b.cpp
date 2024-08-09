#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, x;
  cin >> n >> x;
  vector<pair<int, int>> v;
  for (int i = 0; i < n; ++i)
  {
    int p;
    cin >> p;
    v.push_back({p, i + 1});
  }
  sort(v.begin(), v.end());
  bool ok = false;
  for (int i = 0; i < n; ++i)
  {
    int lo = i + 1;
    int hi = n - 1;
    while (lo < hi)
    {
      int cur = v[i].first + v[lo].first + v[hi].first;
      if (cur == x)
      {
        cout << v[i].second << ' ' << v[lo].second << ' ' << v[hi].second << '\n';
        ok = true;
        break;
      }
      if (cur > x)
      {
        hi--;
      }
      else
      {
        lo++;
      }
    }
    if (ok)
      break;
  }
  if (!ok)
    cout << "IMPOSSIBLE\n";
  return 0;
}