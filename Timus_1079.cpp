#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	int a[100000], ans[100000];
	a[0] = 0;
	a[1] = 1;
	ans[1] = 1;
	for(int i = 2; i <= 99999; ++i){
		if(i&1) a[i] = a[i/2] + a[i/2 + 1];
		else a[i] = a[i/2];
		ans[i] = max(ans[i-1], a[i]);
	}
	int n;
	while(cin >> n && n){
		cout << ans[n] << "\n";
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
