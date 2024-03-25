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
    map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
      int x;
      cin >> x;
      mp[x]++;
    }
    if (n%2 == 1)
    {
      cout << mp.size() - 1 << '\n';
    }
    else
      cout << mp.size() << '\n';
  }
  return 0;
}