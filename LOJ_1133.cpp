#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	int n, q; cin >> n >> q;
	vector<int> v(n);
	for(int i = 0; i < n; ++i){
		cin >> v[i];
	}
	while(q--){
		char ch; cin >> ch;
		if(ch == 'S'){
			int x; cin >> x;
			for(int i = 0; i < v.size(); ++i){
				v[i] += x;
			}
		}
		if(ch == 'M'){
			int x; cin >> x;
			for(int i = 0; i < v.size(); ++i){
				v[i] *= x;
			}
		}
		if(ch == 'D'){
			int x; cin >> x;
			for(int i = 0; i < v.size(); ++i){
				v[i] /= x;
			}
		}
		if(ch == 'P'){
			int l, r; cin >> l >> r;
			swap(v[l], v[r]);
		}
		if(ch == 'R') reverse(v.begin(),v.end());
	}
	for(auto it: v) cout << it << " ";
	cout << "\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tc, t = 0; cin >> tc;
	while(tc--){
		cout << "Case " << ++t << ":\n";
		solve();
	}

	return 0;
}
