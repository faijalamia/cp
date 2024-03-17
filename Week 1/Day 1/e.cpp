#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    int a,b,c;
    cin>>a>>b>>c;
    int ans = -1;
    for(int i = a; i<=b; ++i){
        if(i%c==0){
            ans = i;
            break;
        }
    }
    cout<<ans;
  return 0;
}