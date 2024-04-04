#include <bits/stdc++.h>
using namespace std;
#define int long long
bool vis[205][205];
int a[205][205];
int n, m;
bool valid(int i, int j)
{
  if (i < 0 || i >= n || j < 0 || j >= m)
    return false;
  return true;
}
vector<pair<int, int>> vp1 = {{1, 1}, {-1, -1}};
vector<pair<int, int>> vp2 = {{-1, 1}, {1, -1}};
int d1(int si, int sj, int sum)
{
  //sum += a[si][sj];
  vis[si][sj] = true;
  for (int i = 0; i < 2; ++i)
  {
    int ci = si + vp1[i].first;
    int cj = sj + vp1[i].second;
    if (valid(ci, cj) == true && vis[ci][cj] == false)
    {
      sum=d1(ci, cj, sum+a[ci][cj]);
    }
  }
  return sum;
}

int d2(int si, int sj, int sum)
{
  vis[si][sj] = true;
  for (int i = 0; i < 2; ++i)
  {
    int ci = si + vp2[i].first;
    int cj = sj + vp2[i].second;
    if (valid(ci, cj) == true && vis[ci][cj] == false)
    {
      sum = d2(ci, cj, sum+a[ci][cj]);
    }
  }
  return sum;
}
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    // int n,m;
    cin >> n >> m;
    // vector<vector<int>>a(n,vector<int>(m));
    for (int i = 0; i < n; ++i)
    {
      for (int j = 0; j < m; ++j)
      {
        cin >> a[i][j];
      }
    }
    memset(vis,false,sizeof(vis));
    // cout<<d1(0,0,a[0][0]);
    // cout<<d1(0,1,a[0][1]);
    int mx = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
      for (int j = 0; j < m; ++j)
      {
        memset(vis,false,sizeof(vis));
        int s = d1(i,j,a[i][j])+d2(i,j,0);
        mx = max(mx,s);
        //cout<<d1(i,j,a[i][j])<<' '<<d2(i,j,0)<<'\n';
      }
    }
     cout<<mx<<'\n';
  }
  return 0;
}