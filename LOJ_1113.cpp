#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	vector<string> v = {"http://www.lightoj.com/"};
	vector<int> back, forward;
	int cur = 0;
	string s;
	while(cin >> s){
		if(s=="QUIT") return;
		if(s=="VISIT"){
			string t; cin >> t;
			v.push_back(t);
			back.push_back(cur);
			cur = v.size()-1;
			forward.clear();
			cout << v[cur] << "\n";
		}
		if(s=="BACK"){
			if(back.size()==0) cout << "Ignored" << "\n";
			else{
				forward.push_back(cur);
				cur = back.back();
				back.pop_back();
				cout << v[cur] << "\n";
			}
		}
		if(s=="FORWARD"){
			if(forward.size()==0) cout << "Ignored" << "\n";
			else{
				back.push_back(cur);
				cur = forward.back();
				forward.pop_back();
				cout << v[cur] << "\n";
			}
		}
	}		
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tc, t = 0; cin >> tc;
	while(tc--){
		cout << "Case " << ++t << ":" << "\n";
		solve();
	}

	return 0;
}
