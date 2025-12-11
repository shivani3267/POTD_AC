#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    bool p=0;
    int evc=0,odc=0;
    ll disp=0;
    for(int i=0;i<n;i++){
        if(a[i] %2 != i%2){ p=1; disp++;}
        if(a[i] %2==0) evc++;
        else odc++;
    }
    int ans=0;
    if(p==0) ans=0;
    else{
        if(odc!=n/2 || evc != (n+1)/2) ans=-1;
        else ans=disp/2;
    }
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}