#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    int x,y;
    cin>>x>>y;
    int cnt = 0;
    for(int i = x; i<=y; i*=2){
      //cout<<i<<'\n';
      cnt++;
    }
    cout<<cnt<<'\n';
  return 0;
}