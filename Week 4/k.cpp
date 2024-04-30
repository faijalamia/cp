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
        int n,b;
        cin>>n>>b;
        int a[n];
        for(int i = 0; i<n; ++i){
            cin>>a[i];
        }
        int p = -1LL;
        for(int i = 0; i<n; ++i){
            if((a[i]&b)==b){
                p&=a[i];
                //cout<<p<<'\n';
            }
        }
        if(p==b) cout<<"YES\n";
        else cout<<"NO\n";
    }
  return 0;
}