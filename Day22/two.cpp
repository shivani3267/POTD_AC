//CODEFORCES PROBLEM:Three Pairwise Maximums (https://codeforces.com/problemset/problem/1385/A)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
  
 
void solve() {
    ll x,y,z;
    cin>>x>>y>>z;
    ll a,b,c;
    a=min(x,z);
    b=min(x,y);
    c=min(y,z);
    if(x!=max(a,b) || y!=max(b,c) || z!=max(a,c)) cout<<"No\n";
    else{
        cout<<"Yes\n";
        cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}