#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n; cin >> n;
    ll one = 0, f = 0;
    for(ll i = 0; i < 33; ++i){
        if(f == 1 && ((1LL << i) & n) == 0){
            n |= (1LL << i);
            break;
        }
        if(((1LL << i) & n)){
            one++;
            n &= ~(1LL << i);
            f = 1;
        }
    }
    for(ll i = 0; i < one-1; ++i){
        n |= (1LL << i);
    }
    cout << n << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int tc, t = 0; cin >> tc;
    while(tc--){
        cout << "Case " << ++t << ": ";
        solve();
    }

    return 0;
}
