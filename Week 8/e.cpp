#include <bits/stdc++.h>
using namespace std;
#define int long long
int lcm(int a,int b){
  return (a*b)/__gcd(a,b);
}
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    int n;
    cin>>n;
    int a = 0,b = 0;
    bool ok = false;
    for(int i = sqrt(n); i>=1; --i){
      if(n%i==0){
        a = i;
        b = n/i;
        if(lcm(a,b)==n){
          cout<<a<<' '<<b;
          break;
        }
      }
    }
  return 0;
}