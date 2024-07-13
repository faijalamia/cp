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
        int a,b,l;
        cin>>a>>b>>l;
        set<int>s;
        for(int i = 0; i<=20; ++i){
            for(int j = 0; j<=20; ++j){
                int d = pow(a,i)*pow(b,j);
                if(l%d==0){
                    s.insert(l/d);
                }
            }
        }
        cout<<s.size()<<'\n';
    }
  return 0;
}