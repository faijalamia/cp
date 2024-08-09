#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int ans = 0;
        if(x>y){
            int c = x*x-x+1;
            if(x%2==0)
            ans = c+(x-y);
            else{
                ans = c-(x-y);
            }
        }
        else{
            int c = y*y-y+1;
            if(y%2==0){
                ans = c-(y-x);
            }
            else{
                ans = c+(y-x);
            }
        }
        cout<<ans<<'\n';

    }
  return 0;
}