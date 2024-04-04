#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll maxx = 1e6+10;
long double dp[maxx];

void solve(){
	ll n, b; cin >> n >> b;
	cout << (ll)(dp[n]/log10(b)) + 1 << "\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	for(int i = 1; i < maxx; ++i){
		dp[i] = dp[i-1] + log10(i);
	}
	
	int tc, t = 0; cin >> tc;
	while(tc--){
		cout << "Case " << ++t << ": ";
		solve();
	}

	return 0;
}
