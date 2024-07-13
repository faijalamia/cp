#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  set<int> v;
  for (int i = 1; i * i <= n; ++i)
  {
    if (n % i == 0)
    {
      v.insert(i);
      v.insert(n / i);
    }
  }

  if (v.size() < k)
  {
    cout << -1 << '\n';
  }
  else
  {
    auto it = v.begin();
    for (int i = 1; i < k; ++i)
    {
      it++;
    }
    cout << *it << '\n';
  }
  return 0;
}