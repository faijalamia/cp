#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; ++i){
        cin>>a[i];
    }
    int key;
    cin>>key;
    int l = 0,r = n-1,idx = -1;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]==key){
            idx = mid;
            r = mid-1;
        }
        else if(a[mid]<key){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    cout<<"First Occurance of "<<key<<" is found at index "<<idx<<'\n';
  return 0;
}