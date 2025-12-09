//CF: Permutaion Swap:https://codeforces.com/problemset/problem/1828/B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    ll k=INT_MIN;
    unordered_map<int,int>mp;
    for(ll i=0;i<n;i++) mp[a[i]]=i;
    for(ll i=0;i<n;i++){
        k=max(k,i+1-mp[a[i]]);
    }
    cout<<k<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}