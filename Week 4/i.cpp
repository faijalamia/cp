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
        if(__builtin_popcount(n)==1){
            cout<<0<<' '<<n<<'\n';
        }
        else{
            int a = (1<<__lg(n));
            cout<<(a^n)<<' '<<a<<'\n';
        }
    }
  return 0;
}