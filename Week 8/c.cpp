#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i)
  {
    int x;
    cin >> x;
    if (x == 1)
      cout << "NO\n";
    else if (x == 4 || x == 9)
    {
      cout << "YES\n";
    }
    else
    {
      int k = 0;
      int sq = sqrt(x);
      //cout<<"sq = "<<sq<<'\n';
      if ((sq * sq) == x)
      {
        for (int j = 2; j * j <= sq; ++j)
        {
          //cout<<"j = "<<j<<'\n';
          if (sq % j == 0)
          {
            k = -1;
            break;
          }
        }
      }
      else
      {
        k = -1;
      }
      if (k == 0)
        cout << "YES\n";
      else
        cout << "NO\n";
    }
  }
  return 0;
}