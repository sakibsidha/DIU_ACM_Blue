#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int maxx = 1001;
int divs[maxx];

bool cmp(const pair<int, int>& a, const pair<int, int>& b){
	if (a.second != b.second) return (a.second < b.second);
	return (a.first > b.first);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	for(int i = 1; i < maxx; ++i){
		for(int j = i; j < maxx; j += i){
			++divs[j];
		}
	}
	vector<pair<int,int>> v;
	for(int i = 1; i <= 1000; ++i){
		v.push_back({i, divs[i]});
	}
	sort(v.begin(),v.end(),cmp);
	
	int tc, t = 0; cin >> tc;
	while(tc--){
		int n; cin >> n;
		cout << "Case " << ++t << ": " << v[n-1].first << "\n";
	}

	return 0;
}
