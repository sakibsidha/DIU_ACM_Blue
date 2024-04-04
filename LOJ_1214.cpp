#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	string s; cin >> s;
	ll n; cin >> n;
	ll ans = 0;
	for(int i = 0; i < s.size(); ++i){
		if(s[i] == '-') continue;
		else ans = (ans*10 + (s[i] - '0')) % n;
	}
	cout << ((ans) ? "not divisible" : "divisible") << "\n";
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
