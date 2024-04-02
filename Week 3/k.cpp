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
        vector<pair<int,int>>v1;
        for(int i = 0; i<n; ++i){
            int x;
            cin>>x;
            v1.push_back({x,i});
        }
        vector<pair<int,int>>v2;
        for(int i = 0; i<n; ++i){
            int x;
            cin>>x;
            v2.push_back({x,i});
        }
        vector<pair<int,int>>v3;
        for(int i = 0; i<n; ++i){
            int x;
            cin>>x;
            v3.push_back({x,i});
        }
        sort(v1.rbegin(),v1.rend());
        sort(v2.rbegin(),v2.rend());
        sort(v3.rbegin(),v3.rend());
        // for(int i = 0; i<n; ++i){
        //     cout<<v1[i].first<<' '<<v1[i].second<<'\n';
        // }
        int ans = 0;
        for(int i = 0; i<3; ++i){
            for(int j = 0; j<3; ++j){
                for(int k = 0; k<3; ++k){
                    if(v1[i].second!=v2[j].second && v2[j].second!=v3[k].second && v3[k].second!=v1[i].second){
                        ans = max(ans,(v1[i].first+v2[j].first+v3[k].first));
                    }
                }
            }
        }
        cout<<ans<<'\n';
    }
  return 0;
}