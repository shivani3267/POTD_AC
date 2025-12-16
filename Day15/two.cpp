// Chewbaсca and Number Codeforces

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll x;
    cin>>x;
    vector<ll>a;
    while(x){
        a.push_back(x%10);
        x/=10;
    }
    reverse(a.begin(),a.end());
    for(int i=1;i<a.size();i++) a[i]=min(a[i],9-a[i]);
    if(a[0] != 9) a[0]=min(a[0],9-a[0]);

     ll ans = 0;
    for(int i = 0; i < a.size(); i++){
        ans = ans * 10 + a[i];
    }
    cout<<ans<<endl;
    return 0;
}