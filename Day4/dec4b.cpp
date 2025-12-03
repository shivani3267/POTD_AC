/* A. Next Round
"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of n participants took part in the contest (n ≥ k), and you already know their scores. Calculate how many participants will advance to the next round.
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)  cin>>a[i];

    ll mark=a[k-1];
    int ans=0;
    for(ll i=0;i<n;i++){
        if(a[i]>0 && a[i]>= mark) ans++;
        else break;
    }
    cout<<ans<<endl;
}
int main(){
    solve();
    return 0;
}
