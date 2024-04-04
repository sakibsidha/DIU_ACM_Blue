#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isLeap(ll n){
	if(n%400==0) return true;
	return (n%4==0 && n%100 != 0);
}

bool beforeFeb(string& s){
	return (s == "January" || s == "February");
}

bool afterFeb(string& s, ll d){
	if(s == "January") return false;
	else if(s == "February"){
		if(d < 29) return false;
		else return true;
	}
	else return true;
}

void solve(){
	string s, s2;
	ll d, y, d2, y2, start = -1, end = -1;
	char ch;
	cin >> s >> d >> ch >> y >> s2 >> d2 >> ch >> y2;
	if(beforeFeb(s)){
		start = y;
	} else start = y + 1;
	if(afterFeb(s2, d2)){
		end = y2;
	} else end = y2 - 1;
	if(start > end){
		cout << 0 << "\n";
		return;
	}
	ll c4 = (start%4==0) ? end/4 - start/4 + 1 :  end/4 - start/4;
	ll c100 =  (start%100==0) ? end/100 - start/100 + 1 :  end/100 - start/100;
	ll c400 = (start%400==0) ? end/400 - start/400 + 1 :  end/400 - start/400;
	cout << c4 - c100 + c400 << "\n";
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
