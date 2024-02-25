#include <bits/stdc++.h>
using namespace std;
using ld = long double;
const ld pi = 2 * acos(0.0);

void solve(){
    ld n; cin >> n;
	cout << fixed << setprecision(2) << 4*n*n - pi*n*n << "\n";
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
