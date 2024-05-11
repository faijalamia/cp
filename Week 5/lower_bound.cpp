#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    vector<int>v = {2,3,4,4,6,9,10};
    auto it1 = lower_bound(v.begin(),v.end(),4);
    cout<<it1-v.begin()<<'\n';
    auto it2 = lower_bound(v.begin(),v.end(),5);;
    cout<<it2-v.begin()<<'\n';
  return 0;
}