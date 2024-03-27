#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	int n; cin >> n;
	int a[n][n]{};
	int cur = 1;
	for(int i = n-1; i >= 0; --i){
		int row = 0, col = i;
		while(true){
			a[row][col] = cur;
			cur++;
			if(col == n-1) break;
			row++; col++;
		}
	}
	for(int i = 1; i < n; ++i){
		int row = i, col = 0;
		while(true){
			a[row][col] = cur;
			cur++;
			if(row == n-1) break;
			row++; col++;
		}
	}
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	//int tc; cin >> tc;
	//while(tc--)
		solve();

	return 0;
}
