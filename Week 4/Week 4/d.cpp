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
    int k = n / 2;
    int pw = __lg(n);
    cout << (1 << pw) - 1 << '\n';
  }
  return 0;
}