#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b; cin >> a >> b;
    if(a > b) swap(a,b);
    if(a==1) cout << b << "\n";
    else if(a==2){
		int ans = (b/4)*4;
		int left = b%4;
		if(left && left <= 1) ans += 2;
		else if(left) ans += 4;
		cout << ans << "\n";
	}
    else{
        int k_1 = ceil(double(a)/2.0);
        int k_2 = ceil(double(a-1)/2.0);
        int l_1 = ceil(double(b)/2.0);
        int l_2 = ceil(double(b-1)/2.0);
        cout << k_1 * l_1 + k_2 * l_2 << "\n";
    }
}

int main() {
    int tc, t = 0; cin >> tc;
    while(tc--){ 
        cout << "Case " << ++t << ": ";
        solve();
    }
        
    return 0;
}
