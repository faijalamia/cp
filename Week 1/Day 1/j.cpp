#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a,b,c;
  cin>>a>>b>>c;
  bool ok = false;
    for(int i = 0; i<=10000; ++i){
      for(int j = 0; j<=10000; ++j){
        if(a*i+b*j==c){
          ok = true;
          break;
        }
        else if(a*i+b*j>c){
          break;
        }
      }
      if(ok) break;
    }
    if(ok) cout<<"Yes\n";
    else cout<<"No\n";
  return 0;
}