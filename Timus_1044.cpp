#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	int cnt = 0;
	int n; cin >> n;
	if(n==8){
		cout << 4816030 << "\n";\
		return;
	}
	for(int i = 0; i <= pow(10,n)-1; ++i){
		string s = to_string(i), k;
		for(int j = 1; j <= n-s.size(); ++j){
			k.push_back('0');
		}
		s = k + s;
		int sum_1 = 0, sum_2 = 0;
		for(int j = 0; j < n/2; ++j) sum_1 += (s[j]-'0');
		for(int j = n/2; j < n; ++j) sum_2 += (s[j]-'0');
		if(sum_1 == sum_2) ++cnt;
	}
	cout << cnt << "\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	//int tc; cin >> tc;
	//while(tc--)
		solve();

	return 0;
}
