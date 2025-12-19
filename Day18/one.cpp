/*C. Cypher: https://codeforces.com/problemset/problem/1703/C */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n,x;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    vector<vector<char>> b;
    for(ll i=0;i<n;i++){
        ll c;
        cin>>c;
        vector<char>temp(c);
        for(ll j=0;j<c;j++) cin>>temp[j];
        b.push_back(temp);
    }

    //answer
    vector<ll>ans;
    for(ll i=0;i<n;i++){
        ll val=a[i];
        for(ll j=0;j<b[i].size();j++){
            if(b[i][j]=='U') val = val==0 ? 9: (val-1)%10;
            else val = (val+1)%10;
        }
        ans.push_back(val);
    }
    for(ll i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    cout<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}