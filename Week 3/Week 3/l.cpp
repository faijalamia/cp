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
    int n,k;
    cin>>n>>k;
    map<int,pair<int,int>> mp;
    for(int i = 0; i<n; ++i){
      int x;
      cin>>x;
      if(mp.find(x)==mp.end()){
        mp[x].first = i+1;
        mp[x].second = i+1;
      }
      else{
        mp[x].second = i+1;
      }
    }
    // for(auto i = mp.begin(); i!=mp.end(); i++){
    //   cout<<i->first<<' '<<i->second.first<<' '<<i->second.second<<'\n';
    // }
    while(k--){
      int a,b;
      cin>>a>>b;
      if(mp.find(a)==mp.end() || mp.find(b)==mp.end() || mp[b].second-mp[a].first<0) cout<<"NO\n";
      else cout<<"YES\n";
    }
  }  
  return 0;
}