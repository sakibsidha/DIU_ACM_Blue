#include <bits/stdc++.h>
using namespace std;

void solve(){
	vector<int> v = {1,3,6,1,6,3,1,9,9};
	int a, b; cin >> a >> b;
	int temp_a = a, temp_b = b;
	while(temp_a%9) temp_a++;
	while(temp_b%9) temp_b--;
	if(temp_a > temp_b){
		int i = 8, cnt = 0;
		while(temp_a >= a){
			if(temp_a >= a && temp_a <= b){
				if(v[i]%3==0) cnt++;
			}
			temp_a--;
			i--;
		}
		cout << cnt << "\n";
		return;
	}
	int ans = ((temp_b/9) - (temp_a/9)) * 6;
	int i = 8;
	while(temp_a >= a){
		temp_a--;
		if(v[i]%3==0) ans++;
		i--;
	}
	i = 0;
	temp_b++;
	while(temp_b <= b){
		temp_b++;
		if(v[i]%3==0) ans++;
		i++;
	}
	cout << ans << "\n";
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
