#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int h[n],t[m];
    map<int,int>mp;
    for(int i = 0; i<n; ++i){
        cin>>h[i];
        mp[h[i]]++;
    }
    for(int i = 0; i<m; ++i){
        cin>>t[i];
    }
    for(int i = 0; i<m; ++i){
        auto it = mp.upper_bound(t[i]);
        if(it==mp.begin()){
            cout<<-1<<'\n';
        }
        else{
            --it;
            cout<<(*it).first<<'\n';
            --(*it).second;
            if((*it).second==0){
                mp.erase(it);
            }
        }
    }
  return 0;
}