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
    int n, m;
    cin >> n >> m;
    vector<string> a;
    int x = 1;
    for (int i = 0; i < n; ++i)
    {
      string s = "";
      for (int j = 0; j < m; ++j)
      {
        s += to_string(x);
        s += '.';
        x++;
      }
      a.push_back(s);
    }
    bool isPrime = true;
    for (int i = 2; i * i <= m; ++i)
    {
      if (m % i == 0)
      {
        isPrime = false;
        break;
      }
    }
    if (isPrime)
    {
      for (int i = 1; i < a.size(); i += 2)
      {
        for (int j = 0; j < a[i].size(); ++j)
        {
          if (a[i][j] == '.')
          {
            cout << ' ';
          }
          else
          {
            cout << a[i][j];
          }
        }
        cout << '\n';
      }

      for (int i = 0; i < a.size(); i += 2)
      {
        for (int j = 0; j < a[i].size(); ++j)
        {
          if (a[i][j] == '.')
          {
            cout << ' ';
          }
          else
          {
            cout << a[i][j];
          }
        }
        cout << '\n';
      }
    }
    else
    {
      for (string i : a)
      {
        for (int j = 0; j < i.size(); ++j)
        {
          if (i[j] == '.')
          {
            cout << " ";
          }
          else
          {
            cout << i[j];
          }
        }
        cout << '\n';
      }
    }
  }
  return 0;
}