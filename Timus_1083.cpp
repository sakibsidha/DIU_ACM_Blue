/**
 *    author: sakibsidha
 *    created: 28-06-2023 00:20:32
**/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define mp make_pair
#define pb push_back
#define fi first
#define se second
    
void solve(){
    ll n;
    string s;
    cin>>n>>s;
    ll k = s.size();
    int end;
    if(n%k) end = n%k;
    else end = k;
    ll sum = 1;
    for(int i=n;i>=end;i-=k) sum *= i;
    cout << sum << endl;
}
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
    
    return 0;
}
