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
    map<int,int> mp;
    for(int i = 0; i<n; ++i){
        int last = __lg(a[i]);
        mp[last]++;
    }
    int ans = 0;
    for(auto [x,y]: mp){
      ans+=(y*(y-1))/2;
    }
    cout<<ans<<'\n';
   } 
  return 0;
}