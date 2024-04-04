#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	ll q; cin >> q;
	ll sum = 0;
	while(q--){
		string s; cin >> s;
		if(s == "report") cout << sum << "\n";
		else{
			ll k; cin >> k;
			sum += k;
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tc, t = 0; cin >> tc;
	while(tc--){
		cout << "Case " << ++t << ":\n";
		solve();
	}

	return 0;
}
