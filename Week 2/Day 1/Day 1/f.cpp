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
        int a[n];
        for(int i = 0; i<n; ++i){
            cin>>a[i];
        }
        for(int j = 0; j<n; ++j){
            int b;
            cin>>b;
            string s;
            cin>>s;
            for(int i = 0; i<s.size(); ++i){
                if(s[i]=='D'){
                    a[j]++;
                    a[j]%=10;
                }
                else{
                    a[j]--;
                    if(a[j]<0){
                        a[j] = 9;
                    }
                }
            }
        }
        for(int i = 0; i<n; ++i){
            cout<<a[i]<<' ';
        }
        cout<<'\n';
    }
  return 0;
}