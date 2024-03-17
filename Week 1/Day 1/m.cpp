#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    for(int i = 0; i<n; ++i){
      cin>>arr[i];
      sum+=arr[i];
    }
    sort(arr,arr+n);
    if(sum%2){
      for(int i = 0; i<n; ++i){
        if(arr[i]%2){
          sum-=arr[i];
          break;
        }
      }
    }
    cout<<sum;
  return 0;
}