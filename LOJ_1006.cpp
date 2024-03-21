#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll mod = 10000007;
const ll maxx = 1e6+10;
ll dp[maxx];

void solve(){
	for(int i = 0; i < 6; ++i){
		cin >> dp[i];
		dp[i] %= mod;
	}
	ll n; cin >> n;
	for(int i = 6; i <= n; ++i){
		dp[i] = 0;
		for(int j = 1; j <= 6; ++j){
			dp[i] = (dp[i] + dp[i-j]) % mod;
		}
	}
	cout << dp[n] << "\n";
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
