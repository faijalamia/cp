#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    int l,r;
    cin>>l>>r;
    cout<<"YES\n";
    for(int i = l; i<=r; i+=2){
        cout<<i<<" "<<i+1<<'\n';
        //cout<<"gcd = "<<__gcd(i,i+1)<<'\n';
    }
  return 0;
}