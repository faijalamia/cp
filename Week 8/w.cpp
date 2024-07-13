#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<int>pair[1005];
  for(int i = 1; i<=1000; ++i){
    for(int j = 1; j<=1000; ++j){
        if(__gcd(i,j)==1)
        pair[i].push_back(j);
    }
  }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i<n; ++i){
            cin>>a[i];
        }
        vector<int>mxIndx(1005,-1);
        for(int i = 0; i<n; ++i){
            mxIndx[a[i]] = i+1;
        }
        int ans = -1;
        for(int i = 1; i<=1000; ++i){
            if(mxIndx[i]==-1){
                continue;
            }
            // else if(i==1){
            //     ans = max(ans,mxIndx[i]*2);
            // }
            else{
                //cout<<"i = "<<i<<'\n';
                for(int x: pair[i]){
                    //cout<<"x = "<<x<<'\n';
                    if(mxIndx[x]!=-1){
                        //cout<<mxIndx[i]<<' '<<mxIndx[x]<<'\n';
                        ans = max(ans,mxIndx[i]+mxIndx[x]);
                    }
                }
            }
        }

        cout<<ans<<'\n';
        
    }
  return 0;
}