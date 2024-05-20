#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	ll n; cin >> n;
	cin.ignore();
	string s;
	map<string,ll> mp;
	while(getline(cin, s)){
		string t;
		for(int i = 0; i < s.size(); ++i){
			if(s[i] == ' ') break;
			else t.push_back(s[i]);
		}
		mp[t]++;
	}
	for(auto it: mp){
		cout << it.first << " " << it.second << "\n";
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	// int tc; cin >> tc;
	// while(tc--)
		solve();
		
	return 0;
}
