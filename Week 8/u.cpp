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
        int sum = 0;
        for(int i = 0; i<n; ++i){
            cin>>a[i];
            sum+=a[i];
        }
        int ans = 0,g = 0,left = 0,right = 0;
        for(int i = 0; i<n-1; ++i){
            left+=a[i];
            right  = sum-left;
            g = __gcd(left,right);
            ans = max(g,ans);
        }
        cout<<ans<<'\n';
    }
  return 0;
}