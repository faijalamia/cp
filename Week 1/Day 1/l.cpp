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
      int arr[n+1];
      int ans = 0;
      for(int i = 1; i<=n; ++i){
        cin>>arr[i];
        if(arr[i]>i){
          int mx = arr[i]-i;
          ans = max(mx,ans);
        }
      }
      cout<<ans<<'\n';
    }
  return 0;
}