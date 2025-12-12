
/*Balanced Array*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin>>n;
    if((n/2) %2 ==1){
        cout<<"No\n";
        return;
    }

    vector<ll>a;
    //even print
    for(int i=1;i<=n/2;i++)a.push_back(2*i);

    //odd print 
    ll cnt = (n/2)/2;
    ll presize=a.size();
    for(int i=0;i<presize;i++){
        if(cnt){ a.push_back(a[i]-1); cnt--;}
        else a.push_back(a[i]+1);
    }
    cout<<"Yes\n";
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}