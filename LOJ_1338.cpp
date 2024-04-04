#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	string s, t;
	getline(cin, s);
	getline(cin, t);
	map<char,int> mp, mp2;
	for(int i = 0; i < s.size(); ++i){
		if(s[i]==' ') continue;
		else{
			s[i] = tolower(s[i]);
			++mp[s[i]];
		}
	}
	for(int i = 0; i < t.size(); ++i){
		if(t[i]==' ') continue;
		else{
			t[i] = tolower(t[i]);
			++mp2[t[i]];
		}
	}
	for(auto it: mp2){
		if(mp[it.first] != it.second){
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
	cin.ignore();
	while(tc--){
		cout << "Case " << ++t << ": ";
		solve();
	}

	return 0;
}
