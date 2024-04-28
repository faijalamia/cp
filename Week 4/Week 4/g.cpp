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
        int x = 0;
        for(int i = 0; i<n; ++i){
            cin>>a[i];
            x|=a[i];
        }
        cout<<x<<'\n';
    }
  return 0;
}