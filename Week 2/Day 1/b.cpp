#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    int k,s;
    cin>>k>>s;
    int cnt = 0;
    for(int x = 0; x<=k; ++x){
        for(int y = 0; y<=k; ++y){
            int z = s-(x+y);
            if(z>=0 && z<=k){
                cnt++;
            }
        }
    }
    cout<<cnt<<'\n';
  return 0;
}