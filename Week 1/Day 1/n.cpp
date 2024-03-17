#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    int n;
    cin>>n;
    bool b[n+1];
    memset(b,false,sizeof(b));
    //int arr[n-1];
    for(int i = 1; i<n; ++i){
      int x;
      cin>>x;
      b[x] = true;
    }
    for(int i = 1; i<=n; ++i){
      if(!b[i]){
        cout<<i<<'\n';
      }
    }
  return 0;
}