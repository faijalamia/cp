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
        set<int>prime_factors;
        for(int i = 0; i<n; ++i){
            int x = a[i];
            for(int j = 2; j*j<=x; ++j){
                if(x%j==0){
                    while(x%j==0){
                        prime_factors.insert(j);
                        x/=j;
                    }
                }
            }
            if(x>1){
                prime_factors.insert(x);
            }
        }
        // for(int i: prime_factors){
        //     cout<<i<<' ';
        // }
        // cout<<'\n';
        vector<int>ans(n,-1);
        //cout<<prime_factors.size()<<'\n';
        int k = 1;
        for(int i: prime_factors){
            bool ok = false;
            for(int j = 0; j<n; ++j){
                if(a[j]%i==0 && ans[j]==-1){
                    ans[j] = k;
                    ok = true;
                }
            }
             if(ok) k++;
        }
        cout<<k-1<<'\n';
        for(int i: ans){
            cout<<i<<' ';
        }
        cout<<'\n';
    }
  return 0;
}