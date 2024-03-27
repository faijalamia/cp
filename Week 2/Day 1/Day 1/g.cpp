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
        string s;
        cin>>s;
        string s1 = "Timur";
        sort(s1.begin(),s1.end());
        sort(s.begin(),s.end());
        if(s==s1) cout<<"YES\n";
        else cout<<"NO\n";
    }
  return 0;
}