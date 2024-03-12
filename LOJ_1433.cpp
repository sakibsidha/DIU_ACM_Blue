#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

void solve(){
	ld ox, oy, ax, ay, bx, by;
	cin >> ox >> oy >> ax >> ay >> bx >> by;
	ld r = sqrtl((ax-ox)*(ax-ox) + (ay-oy)*(ay-oy));
	ld base = sqrtl((ax-bx)*(ax-bx) + (ay-by)*(ay-by));
	ld theta = acos((r*r + r*r - base*base)/(2.0*r*r));
	cout << fixed << setprecision(10) << r*theta << "\n";
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
