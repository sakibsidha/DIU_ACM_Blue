#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

ld deg_to_rad(ld theta){
	ld PI = 2*acos(0.0);
	return ((theta * PI) / 180.0);
}

void solve(){
	ld R, n; cin >> R >> n;
	ld theta = (180.0-(360.0/n))/2.0;
	cout << fixed << setprecision(10) << (R*cos(deg_to_rad(theta))) / (1 + cos(deg_to_rad(theta))) << "\n";
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
