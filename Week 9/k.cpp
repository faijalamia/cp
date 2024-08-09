#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
    a[i] = a[i] % n;
  }
  int pre[n + 1LL];
  pre[0LL] = 0LL;
  for (int i = 1; i <= n; ++i)
  {
    pre[i] = pre[i - 1LL] + a[i - 1LL];
  }
  for (int i = 0LL; i <= n; ++i)
  {
    pre[i] = ((pre[i] % n)+n)%n;
    // cout<<pre[i]<<' ';
  }
  // cout << '\n';
  map<int, int> mp;
  set<int>s;
  int ans = 0LL;
  for (int i = 0LL; i < n + 1LL; ++i)
  {
    if (s.find(pre[i]) != s.end())
    {
      ans += mp[pre[i]];
    }
    mp[pre[i]]++;
    s.insert(pre[i]);
  }
  cout << ans;
  return 0;
}