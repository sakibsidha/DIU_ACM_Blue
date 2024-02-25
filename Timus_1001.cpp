#include <bits/stdc++.h>
using namespace std;

void solve(){
	vector<long double> v;
	long double x;
	while(cin >> x){
		v.push_back(x);
	}
	for(int i = v.size()-1; i >= 0; --i) cout << fixed << setprecision(4) << sqrtl(v[i]) << "\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
    solve();
        
    return 0;
}
