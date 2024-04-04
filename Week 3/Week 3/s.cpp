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
        int n,m,h;
        cin>>n>>m>>h;
        int a[n];
        for(int i = 0; i<n; ++i){
            cin>>a[i];
        }
        int b[m];
        for(int i = 0; i<m; ++i){
            cin>>b[i];
        }
        sort(a,a+n,greater<int>());
        sort(b,b+m,greater<int>());
        for(int i = 0; i<m; ++i){
            b[i]*=h;
            //cout<<b[i]<<' ';
        }
        //cout<<'\n';
        int ans = 0;
        for(int i = 0; i<min(n,m); ++i){
            ans+=min(a[i],b[i]);
        }
        cout<<ans<<'\n';
    }
  return 0;
}