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
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i<n; ++i){
          cin>>a[i];
        }
        int mn = 1000,mn_i = -1;
        for(int i = 0; i<n; ++i){
          if(a[i]<mn){
            mn = a[i];
            mn_i = i;
          }
        }
        int mx = 0;
        for(int i = mn_i+1; i<n; ++i){
          mx = max(mx,a[i]);
        }
        cout<<max(0LL,mx-mn)<<'\n';
    }
  return 0;
}