#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

void solve(){
	ld v1, v2, v3, a1, a2;
	cin >> v1 >> v2 >> v3 >> a1 >> a2;
	ld t1 = v1/a1;
	ld t2 = v2/a2;
	ld s1 = v1*t1 - 0.5*a1*t1*t1;
	ld s2 = v2*t2 - 0.5*a2*t2*t2;
	cout << fixed << setprecision(10) << s1+s2 << " " << v3*max(t1,t2) << "\n";
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
