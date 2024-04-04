#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	int n, p, q; cin >> n >> p >> q;
	int sum = 0, ans = 0;
	for(int i = 1; i <= n; ++i){
		int x; cin >> x;
		sum += x;
		if(sum <= q && i <= p) ans = i;
	}
	cout << ans << '\n';
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
