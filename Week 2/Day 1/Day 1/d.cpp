#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    string s,t;
    cin>>s>>t;
    int cnt = 0;
    for(int i = 0; i<s.size(); ++i){
        if(s[i]!=t[i]){
            cnt++;
        }
    }
    cout<<cnt;
  return 0;
}