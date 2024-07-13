#include <bits/stdc++.h>
using namespace std;
#define int long long
int prime(int n)
{
  for (int i = 2; i * i <= n; ++i)
  {
    if (n % i == 0)
    {
      return i;
    }
  }
  return -1;
}
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  if (prime(n) == -1)
    cout << 1;
  else if (n % 2 == 0 || prime(n - 2) == -1)
    cout << 2;
  else
    cout << 3;
  return 0;
}