#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<a+b<<'\n';
    }
    else{
        cout<<max(a,b)*2-1<<'\n';
    }
  return 0;
}