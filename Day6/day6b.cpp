/* A palindrome is a string that reads the same from left to right as from right to left. For example, abacaba, aaaa, abba, racecar are palindromes.

You are given a string s
 consisting of lowercase Latin letters. The string s
 is a palindrome.

You have to check whether it is possible to rearrange the letters in it to get another palindrome (not equal to the given string s
).

*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    string s;
    cin>>s;
    int cnt[26] = {0};
    for(auto e:s) cnt[e-97]++;
    int ans=0;

    for(int i=0;i<26;i++){
        if(cnt[i] > 1 ) ans++;
        
    }
    ans>=2 ? cout<<"Yes"<<endl : cout<<"No"<<endl;
    return;
}
int main(){
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}
