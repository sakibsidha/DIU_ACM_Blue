#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	int r1, c1, r2, c2;
	cin >> r1 >> c1 >> r2 >> c2;
	if(((r1+c1)%2==0 && (r2+c2)%2) || ((r1+c1)%2 && (r2+c2)%2==0)) cout << "impossible" << "\n";
	else{
		int y = c2-c1;
		int x = r2-r1;
		if(x==0){
			if(y==0) cout << "1" << "\n";
			else cout << "2" << "\n";
			return;
		}
		if(y%x==0 && (y/x==1 || y/x==-1)) cout << 1 << "\n";
		else cout << 2 << "\n";
	}
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
