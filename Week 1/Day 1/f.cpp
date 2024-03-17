#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    int a,b,t;
    cin>>a>>b>>t;
    int ans = 0;
    for(int i = a; i<=t; i+=a){
        ans+=b;
    }
    cout<<ans;
  return 0;
}