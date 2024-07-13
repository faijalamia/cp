#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    int x,y;
    cin>>x>>y;
    double a = y*log(x*1.0);
    double b = x*log(y*1.0);

    if(a>b) cout<<">";
    else if(b>a) cout<<"<";
    else cout<<"=";

  return 0;
}