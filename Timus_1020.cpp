#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define PI acos(-1.0)

ld dist(ld x1, ld y1, ld x2, ld y2){
	return sqrtl((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

void solve(){
	int n; cin >> n;
	ld r; cin >> r;
    vector<pair<ld,ld>> v(n);
    for(int i = 0; i < n; ++i){
		cin >> v[i].first >> v[i].second;
	}
	ld sum = 0;
	for(int i = 0; i < n; ++i){
		if(i==0) sum += dist(v[i].first, v[i].second, v[n-1].first, v[n-1].second);
		else sum += dist(v[i].first, v[i].second, v[i-1].first, v[i-1].second);
	}
	sum += 2*PI*r;
	cout << fixed << setprecision(2) << sum << "\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	//int tc; cin >> tc;
	//while(tc--)
		solve();

	return 0;
}
