#include <bits/stdc++.h>
using namespace std;
using ld = long double;
const ld pi = 3.141592653589793238462643383279502884197;

void solve(){
	ld r1, r2, h, p;
	cin >> r1 >> r2 >> h >> p;
	ld x = r2 + (r1-r2)*p/h;
	ld s1 = pi*x*x, s2 = pi*r2*r2;
	cout << fixed << setprecision(9) << (p/3.0)*(s1 + s2 + sqrtl(s1*s2)) << "\n"; 
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
