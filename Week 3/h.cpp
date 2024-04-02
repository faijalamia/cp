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
        int a[n];
        for(int i = 0; i<n; ++i){
            cin>>a[i];
        }
        int ans = 0;
        priority_queue<int>pq;
        for(int i = 0; i<n; ++i){
            if(a[i]!=0){
                pq.push(a[i]);
            }
            else{
                if(!pq.empty()){
                    ans+=pq.top();
                    pq.pop();
                }
            }
        }
        cout<<ans<<'\n';
    }
  return 0;
}