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
        sort(a,a+n);
        map<int,int> mp;
        for(int i = 0; i<n; ++i){
          mp[a[i]]++;
        }
        vector<pair<int,int>> vp;
        for(auto i = mp.begin(); i!=mp.end(); i++){
          vp.push_back({i->first,i->second});
        }
        vp.push_back({0,0});
        // for(auto i: vp){
        //   cout<<i.first<<' '<<i.second<<'\n';
        // }
        int mx = 0,ans = 0;
       // cout<<vp[vp.size()].first<<' '<<vp[vp.size()].second<<'\n';
      //  for(int i = 0; i<vp.size(); ++i){
      //   cout<<vp[i].first<<' '<<vp[i+1].first<<'\n';
      //  }
        for(int i = 0; i<vp.size()-1; ++i){
          if(vp[i].first+1 == vp[i+1].first){
            ans+= max(mx,vp[i].second-vp[i+1].second);
          }
          else{
            ans+=vp[i].second;
          }
        }
        cout<<ans<<'\n';
    }
  return 0;
}