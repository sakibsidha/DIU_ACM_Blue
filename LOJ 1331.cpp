#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

void solve(){
	ld r1, r2, r3;
	cin >> r1 >> r2 >> r3;
	ld a = r1 + r2, b = r2 + r3, c = r1 + r3;
	ld s = (a + b + c)/2.0;
	ld tri = sqrtl(s*(s-a)*(s-b)*(s-c));
	ld A = acos((b*b + c*c - a*a)/(2.0*b*c));
	ld B = acos((a*a + c*c - b*b)/(2.0*a*c));
	ld C = acos((a*a + b*b - c*c)/(2.0*a*b));
	cout << fixed << setprecision(10) << tri - ((r3*r3*A)/2.0 + (r2*r2*C)/2.0 + (r1*r1*B)/2.0) << "\n";
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
