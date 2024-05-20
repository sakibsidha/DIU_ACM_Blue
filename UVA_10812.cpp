#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	ll x, y; cin >> x >> y;
	if((x + y)% 2 == 0){
		ll a = (x + y)/2;
		ll b = x - ((x + y)/2);
		if(b >= 0) cout << a << " " << b << "\n";
		else cout << "impossible" << "\n";
	} else cout << "impossible" << "\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int tc; cin >> tc;
	while(tc--)
		solve();
		
	return 0;
}
