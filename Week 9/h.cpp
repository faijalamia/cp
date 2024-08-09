#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    string s;
    cin>>s;
    int n = s.size();
    map<char,int>mp;
    for(int i = 0; i<n; ++i){
        mp[s[i]]++;
    }
    // for(auto [x,y]: mp){
    //     cout<<x<<' '<<y<<'\n';
    // }
    int odd_cnt = 0;
    char odd_ch = '0';
    for(auto [x,y]: mp){
        if(y%2==1){
            odd_cnt++;
            odd_ch = x;
        }
    }
    if(odd_cnt>1) cout<<"NO SOLUTION\n";
    else{
        vector<char>v;
        for(auto [x,y]: mp){
            if(x!=odd_ch){
            for(int j = 0; j<y/2; ++j){
               v.push_back(x); 
            }
            }
        }
        for(char i: v){
            cout<<i;
        }
        for(int i = 0; i<mp[odd_ch]; ++i){
            cout<<odd_ch;
        }
        reverse(v.begin(),v.end());
        for(char i: v){
            cout<<i;
        }
    }
  return 0;
}