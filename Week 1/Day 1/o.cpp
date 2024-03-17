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
      char c;
      cin>>c;
      string s;
      cin>>s;
      string str = s+s;
      int sz = 2*n;
      int f = -1;
      int mx = 0;
      
      for(int i = 0; i<sz; ++i){
        if(str[i]==c){
          if(f==-1){
            f = i;
          }
          else{
            f = min(f,i);
          }
        }
        if(str[i]=='g' && f!=-1){
          int d = i-f;
          mx = max(d,mx);
          f = -1;
        }
      }
      cout<<mx<<'\n';
    }
  return 0;
}