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
        int sum = n;
        while(n){
            n/=2;
            sum+=n;
        }
        cout<<sum<<'\n';
    }
  return 0;
}