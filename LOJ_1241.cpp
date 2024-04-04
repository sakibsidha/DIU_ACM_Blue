#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	int n; cin >> n;
	vector<int> v = {2};
	for(int i = 0; i < n; ++i){
		int x; cin >> x;
		v.push_back(x);
	}
	int cnt = 0;
	for(int i = 1; i < v.size(); ++i){
		if(v[i]-v[i-1]==0) continue;
		else{
			int k = (v[i]-v[i-1])/5, left = (v[i]-v[i-1])%5;
			cnt += k + (left != 0);
		}
	}
	cout << cnt << "\n";
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
