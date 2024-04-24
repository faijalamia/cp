#include <bits/stdc++.h>
using namespace std;
#define int long long
int cnt_set_bit(int k)
{
  int cnt = 0;
  while (k)
  {
    if (k & 1)
    {
      cnt++;
    }
    k = (k >> 1);
  }
  return cnt;
}
int32_t main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    int a[m];
    for (int i = 0; i < m; ++i)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int frnd = 0;
    for (int i = 0; i < m; ++i)
    {
        int b = x ^ a[i];
        if(cnt_set_bit(b)<=k){
            frnd++;
        }
    }
    cout<<frnd<<'\n';
    return 0;
}