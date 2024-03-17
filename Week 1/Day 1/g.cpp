#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin>>s;
  int arr[26];
  int n = s.size();
  for(int i = 0; i<n; ++i){
    arr[s[i]-'a']++;
  }
  bool ok = false;
  for(int i = 0; i<26; ++i){
    if(arr[i]==0){
      char c = i+'a';
      cout<<c<<'\n';
      ok = true;
      break;
    }
  }
  if(!ok) cout<<"None";
  return 0;
}