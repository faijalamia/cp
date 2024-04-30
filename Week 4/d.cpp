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
        int x = 0;
        for(int i = 0; i<n; ++i){
          x^=a[i];
        }
        int y = 0;
        for(int i = 0; i<n; ++i){
          y^=(a[i]^x);
        }
        if(y==0) cout<<x<<'\n';
        else cout<<-1<<'\n';
        
    }
  return 0;
}