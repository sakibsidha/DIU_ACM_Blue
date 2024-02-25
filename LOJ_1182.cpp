#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	cout << ((__builtin_popcount(n)%2) ? "odd" : "even") << "\n";
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
