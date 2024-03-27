#include <bits/stdc++.h>
using namespace std;
// #define int long long
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
    map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
      int x;
      cin >> x;
      mp[x]++;
    }
    int cnt = 0;
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
      if (i->second > 1)
      {
        cnt += i->second - 1;
        i->second = 1;
      }
    }
    int sz = mp.size();
    if (cnt % 2)
      sz--;
    cout << sz << '\n';
  }
  return 0;
}