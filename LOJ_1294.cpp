#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	ll n, m; cin >> n >> m;
	cout << (n*m)/2 << "\n";
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
