#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	ll n; cin >> n;
	if(n&1){
		cout << "Impossible" << "\n";
		return;
	}
	for(ll i = 0; i <= 63; ++i){
		ll x = (1LL << i);
		if(n%x==0){
			if((n/x)&1){
				cout << n/x << " " << x << "\n";
				return;
			}
		}
	}
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
