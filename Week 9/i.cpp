#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int i = 0, j = 0;
    int t = 0, ans = 0;
    while (i <= n)
    {
        while(t<x){
            t+=a[i];
            i++;
        }
        if(t==x){
            ans++;
            t-=a[j];
            j++;
        }
        while(t>x){
            t-=a[j];
            j++;
        }
    }
    cout << ans;
    return 0;
}