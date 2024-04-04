#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	int n, m, k; cin >> n >> m >> k;
	vector<vector<int>> v(n, vector<int>(k, 0)), done(n, vector<int>(k, 0));
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < k; ++j){
			cin >> v[i][j];
			if(v[i][j] < 0) done[i][j] = 1;
		}
	}
	int p; cin >> p;
	while(p--){
		int x; cin >> x;
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < k; ++j){
				if(v[i][j]==x) done[i][j] = 1;
				if(v[i][j]== -1*x) done[i][j] = 0;
			}
		}
	}
	int cnt = 0;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < k; ++j){
			if(done[i][j]==1){
				++cnt;
				break;
			}
		}
	}
	cout << ((cnt==n) ? "Yes" : "No") << "\n";
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
