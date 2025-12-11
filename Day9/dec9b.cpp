//CF: Permutaion Swap:https://codeforces.com/problemset/problem/1828/B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    int k=INT_MAX;
    for(int i=0;i<n;i++){
        int diff = abs(i+1-a[i]) ;
        if(diff != 0)
        k= min(k,diff);
    }
    cout<<k<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}