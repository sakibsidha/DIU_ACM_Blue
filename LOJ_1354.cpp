#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	string s, t; cin >> s >> t;
	vector<int> sv, tv;
	for(int i = s.size()-1, j = i; i >= 0; i = j){
		if(s[i]=='.'){
			j--;
			continue;
		}
		int num = 0, k = 1;
		while(j >= 0 && s[j] != '.'){
			num += (s[j]-'0')*k;
			k *= 10;
			j--;
			
		}
		sv.push_back(num);
	}
	for(int i = t.size()-1, j = i; i >= 0; i = j){
		if(t[i]=='.'){
			j--;
			continue;
		}
		int num = 0, k = 1;
		while(j >= 0 && t[j] != '.'){
			num += (t[j]-'0')*k;
			k *= 2;
			j--;
			
		}
		tv.push_back(num);
	}
	for(int i = 0; i < 4; ++i){
		if(tv[i] != sv[i]){
			cout << "No" << "\n";
			return;
		}
	}
	cout << "Yes" << "\n";
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
