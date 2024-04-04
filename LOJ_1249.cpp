#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	ll n; cin >> n;
	vector<pair<string, array<ll,3>>> v(n);
	ll tot = 0;
	for(int i = 0; i < n; ++i){
		cin >> v[i].first >> v[i].second[0] >> v[i].second[1] >> v[i].second[2];
		tot += (v[i].second[0]*v[i].second[1]*v[i].second[2]);
	}
	ll one = tot / n, thief = -1, victim = -1;
	for(int i = 0; i < n; ++i){
		if(v[i].second[0]*v[i].second[1]*v[i].second[2] > one){
			thief = i;
		}
		if(v[i].second[0]*v[i].second[1]*v[i].second[2] < one){
			victim = i;
		}
	}
	if(thief==-1) cout << "no thief" << "\n";
	else cout << v[thief].first << " took chocolate from " << v[victim].first << "\n";
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
