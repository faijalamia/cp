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
        string s;
        cin>>s;
        stack<int> st;
        int cnt = 0;
        for(int i = 0; i<n; ++i){
          if(s[i]=='('){
            st.push('(');
          }
          else{
            if(!st.empty()){
              st.pop();
            }
            else cnt++;
          }
        }
        cout<<cnt<<'\n';
    }
  return 0;
}