#include <bits/stdc++.h>
using namespace std;

void solve(){
	int x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int q; cin >> q;
	while(q--){
		int x, y; cin >> x >> y;
		if(x >= x1 && x <= x2 && y >= y1 && y <= y2) cout << "Yes" << "\n";
		else cout << "No" << "\n";
	}
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
