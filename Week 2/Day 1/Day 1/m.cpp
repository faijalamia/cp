#include <bits/stdc++.h>
using namespace std;
#define int long long
bool is_palindrome(const vector<int>& v,int n){

    for(int i = 0; i<n/2; ++i){
        if(v[i]!=v[n-1-i]){
            return false;
        }
    }
    return true;
}
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0; i<n; ++i){
            cin>>v[i];
        }
        if(is_palindrome(v,n)) cout<<"YES\n";
        else{
            int x =0,y = 0;
            for(int i = 0; i<n/2; ++i){
                if(v[i]!=v[n-1-i]){
                    x = v[i];
                    y = v[n-1-i];
                    break;
                }
            }
            vector<int>v1,v2;
            for(int i = 0; i<n; ++i){
                if(v[i]!=x){
                    v1.push_back(v[i]);
                }
            }
            for(int i = 0; i<n; ++i){
                if(v[i]!=y){
                    v2.push_back(v[i]);
                }
            }
            int n1 = v1.size();
            int n2 = v2.size();
            if(is_palindrome(v1,n1) || is_palindrome(v2,n2)){
                cout<<"YES\n";
            }
            else cout<<"NO\n";
        }
    }
  return 0;
}