#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    long long dx = cx - (bx-ax);
    long long dy = ay + (cy-by);
    cout << dx << " " << dy << " " << abs(((ax*by)+(bx*cy)+(cx*dy)+(dx*ay)-(ay*bx)-(cx*by)-(dx*cy)-(ax*dy))/2) << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int tc, t = 0; cin >> tc;
	while(tc--){
		cout << "Case " << ++t << ": ";
		solve();
	}
    
    return 0;
}
