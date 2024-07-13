#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    int n;
    cin>>n;
    cout<<n/2<<'\n';
    if(n%2==0){
        for(int i = 0; i<n/2; ++i){
            cout<<2<<' ';
        }
        cout<<'\n';
    }
    else{
        for(int i = 0; i<n/2-1; ++i){
            cout<<2<<' ';
        }
        cout<<3<<'\n';
    }
  return 0;
}