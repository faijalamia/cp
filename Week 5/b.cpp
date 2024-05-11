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
    string s;
    cin >> s;
    int n = s.size();
    map<char, vector<int>> mp;
    for (int i = 0; i < n; ++i)
    {
      mp[s[i]].push_back(i + 1);
    }
    int dir = 0;
    if (s[0] > s[n - 1])
      dir = -1;
    else
      dir = 1;
    int cost = 0;
    vector<int> ans;
    for (char i = s[0]; i != s[n - 1] + dir; i += dir)
    {
      for (int j : mp[i])
      {
        ans.push_back(j);
      }
    }
    for (int i = 0; i < ans.size() - 1LL; ++i)
    {
      cost += abs(s[ans[i] - 1] - s[ans[i + 1] - 1]);
    }
    cout << cost << ' ' << ans.size() << '\n';
    for (int i : ans)
    {
      cout << i << ' ';
    }
    cout << '\n';
  }
  return 0;
}