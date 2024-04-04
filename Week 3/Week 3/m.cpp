#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (s1 == s2)
            cout << "=\n";
        else
        {
            int a = 0, b = 0, c = 0;
            if(s1.back()=='S'){
                c = -2;
                a+=c;
            }
            else if(s1.back()=='L'){
                c = 2;
                a+=c;
            }
            else if(s1.back()=='M'){
                c = 0;
                a+=c;
            }
            for(int i = 0; i<s1.size()-1; ++i){
                a+=c;
            }
            if(s2.back()=='S'){
                c = -2;
                b+=c;
            }
            else if(s2.back()=='L'){
                c = 2;
                b+=c;
            }
            else if(s2.back()=='M'){
                c = 0;
                b+=c;
            }
            for(int i = 0; i<s2.size()-1; ++i){
                b+=c;
            }
            if(a>b) cout<<">\n";
            else cout<<"<\n";
        }
    }
    return 0;
}