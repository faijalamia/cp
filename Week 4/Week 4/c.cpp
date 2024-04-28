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
        int a[n];
        for(int i = 0; i<n; ++i){
            cin>>a[i];
        }
        int l = 0, r = k-1;
        int oddCnt = 0,ans = 0;
        for(int i = 0; i<k; ++i){
            if(a[i]&1){
                oddCnt++;
            }
        }
        while(r<n){
            if(oddCnt>0) ans++;
            r++;
            if(a[r]&1) oddCnt++;
            if(a[l]&1) oddCnt--;
            l++;
        }
        cout<<ans<<'\n';
    }
  return 0;
}