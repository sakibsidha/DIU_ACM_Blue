#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	ll n; cin >> n;
	ll X1, X2, Y1, Y2, Z1, Z2;
	cin >> X1 >> Y1 >> Z1 >> X2 >> Y2 >> Z2;
	for(int i = 1; i < n; ++i){
		ll x1, y1, z1, x2, y2, z2; cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
		X1 = max(X1, x1);
		Y1 = max(Y1, y1);
		Z1 = max(Z1, z1);
		X2 = min(X2, x2);
		Y2 = min(Y2, y2);
		Z2 = min(Z2, z2);
	}
	if(X2-X1 < 0 || Y2-Y1 < 0 || Z2-Z1 < 0) cout << 0 << "\n";
	else cout << (X2-X1)*(Y2-Y1)*(Z2-Z1) << "\n";
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
