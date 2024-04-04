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
        bool ok  = false;
        int cnt = 0,s = 0;;
        for(int i = 0; i<n; ++i){
            int x;
            cin>>x;
            s+=abs(x);
            if(x<0 && !ok){
                cnt++;
                ok = true;
            }
            else if(x>0){
                ok = false;
            }
        }
        cout<<s<<' '<<cnt<<'\n';
        
    }
  return 0;
}