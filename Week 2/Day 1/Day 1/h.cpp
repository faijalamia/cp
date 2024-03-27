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
        int n,m;
        cin>>n>>m;
        vector<string> v(n);
        for(int i = 0; i<n; ++i){
            cin>>v[i];
        }
        int mn = INT_MAX;
        for(int i = 0; i<n-1; ++i){
            for(int j = i+1; j<n; ++j){
                int d = 0;
                for(int k = 0; k<m; ++k){
                    d+=abs(v[i][k]-v[j][k]);
                }
                mn = min(d,mn);
            }
        }
        cout<<mn<<'\n';
    }
  return 0;
}