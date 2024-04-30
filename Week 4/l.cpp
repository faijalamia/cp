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
        sort(a,a+n,greater<int>());
        int cnt = 1;
        int k = 0,p = 0;
        for(int i = 0; i<n; ++i){
            p^=a[i];
            if(p<k){
                cnt++;
            }
            k = p;
        }
        cout<<cnt<<'\n';
    }
  return 0;
}