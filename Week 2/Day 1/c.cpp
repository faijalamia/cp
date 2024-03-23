#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i = 0; i<n; ++i){
        cin>>a[i];
    }
    for(int i = 0; i<n; ++i){
        if(a[i]!=x){
            cout<<a[i]<<' ';
        }
    }
  return 0;
}