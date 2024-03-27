#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	ll n; cin >> n;
	ll a[n][n];
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < n; ++i){
		int row = i, col = 0;
		while(true){
			cout << a[row][col] << " ";
			if(row==0) break;
			row--; col++;
		}
	}
	vector<int> v;
	for(int i = n-1; i >= 1; --i){
		int row = i, col = n-1;
		while(true){
			v.push_back(a[row][col]);
			if(row == n-1) break;
			row++; col--;
		}
	}
	for(int i = v.size()-1; i >= 0; --i) cout << v[i] << " ";
	cout << "\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	//int tc; cin >> tc;
	//while(tc--)
		solve();

	return 0;
}
