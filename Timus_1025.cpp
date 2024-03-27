#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	ll n; cin >> n;
	ll a[n];
	for(int i = 0; i < n; ++i) cin >> a[i];
	sort(a, a+n);
	ll cur = 0, ans = 0;
	for(int i = 0; i < n; ++i){
		ans += (a[i]/2) + 1;
		++cur;
		if(cur*2 > n) break;
	}
	cout << ans << "\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	//int tc; cin >> tc;
	//while(tc--)
		solve();

	return 0;
}
