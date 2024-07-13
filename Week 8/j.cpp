#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
        int n,a,b,p,q;
        cin>>n>>a>>b>>p>>q;
        if(q>p){
            swap(a,b);
            swap(p,q);
        }
        int x = n/a;
        int y = n/b;
        int c = (a*b)/__gcd(a,b);
        int z = n/c;
        y-=z;
        int ans = x*p+y*q;
        cout<<ans;
  return 0;
}