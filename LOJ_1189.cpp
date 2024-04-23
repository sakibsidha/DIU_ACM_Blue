#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int maxx = 20;
vector<ll> fact(maxx + 1);

void solve(){
    ll n; cin >> n;
    int k = maxx;
    vector<ll> ans;
    while(k >= 0){
        if(fact[k] <= n){
            ans.push_back(k);
            n -= fact[k];
            if(n == 0) break;
        }
        k--;
    }
    if(n == 0){
        for(int i = ans.size()-1; i >= 0; --i){
            cout << ans[i] << "!";
            if(i != 0) cout << "+";
            else cout << "\n";
        }
        
    }
    else cout << "impossible" << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    fact[0] = 1;
    for(ll i = 1; i < maxx + 1; ++i){
        fact[i] = fact[i-1] * i;
    }
    
    int tc, t = 0; cin >> tc;
    while(tc--){
        cout << "Case " << ++t << ": ";
        solve();
    }

    return 0;
}
