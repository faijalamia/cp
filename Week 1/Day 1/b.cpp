#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int cnt = 0;
    for(int i = a; i<=b; ++i){
        cnt++;
    }
    cout<<cnt<<'\n';
  return 0;
}