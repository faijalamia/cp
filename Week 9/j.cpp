#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i = 0; i<n; ++i){
      cin>>a[i];
    }
    int pre[n+1];
    pre[0] = 0;
    for(int i = 1; i<=n; ++i){
      pre[i] = pre[i-1]+a[i-1];
    }
    // for(int i = 0; i<n+1; ++i){
    //   cout<<pre[i]<<' ';
    // }
    // cout<<'\n';
    int ans = 0;
    set<int>s;
    map<int,int>mp;
    for(int i = 0; i<n+1; ++i){
      int need = (pre[i]-x);
      if(s.find(need)!=s.end()){
        ans+=mp[need];
      }
      s.insert(pre[i]);
      mp[pre[i]]++;
      //cout<<"need = "<<need<<'\n';
    }
    cout<<ans<<'\n';
  return 0;
}