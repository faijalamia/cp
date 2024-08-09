#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; ++i){
      cin>>a[i];
    }

    set<int>s;
    int i = 0,j = 0,ans = 0;
    while(i<n){
      int x = a[i];
      if(s.find(x)==s.end()){
        while(s.find(x)==s.end()){
        s.insert(x);
        i++;
        }
      }
      else{
        ans = max(ans,i-j);
        while(a[j]!=x){
          s.erase(a[j]);
          j++;
        }
      }
      i++;
      j++;
    }
    ans = max(ans,i-j);
    cout<<ans<<'\n';
  return 0;
}