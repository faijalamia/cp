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
        int g = a[0];
        int g1 = a[1];
        for(int i = 0; i<n; ++i){
            if(i%2==0){
                g = __gcd(g,a[i]);
            }
            else{
                g1 = __gcd(g1,a[i]);
            }
        }
        bool ok1  = true,ok2 = true;
        for(int i = 0; i<n; i++){
            if(i%2==0 && a[i]%g1==0){
                ok1 = false;
            }
            else if(i%2==1 && a[i]%g==0){
                ok2 = false;
            }
        }
        if(ok1) cout<<g1<<'\n';
        else if(ok2) cout<<g<<'\n';
        else cout<<0<<'\n';
    }
  return 0;
}