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
        int a,b;
        cin>>a>>b;
        if((a+b)%3==0){
            if((a<b && (2*a)>=b) || (b<a && (2*b)>=a) || a==b){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else cout<<"NO\n";
    }
  return 0;
} 