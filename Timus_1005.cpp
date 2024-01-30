/**
 *    author: sakibsidha
 *    created: 12-07-2023 21:07:09
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define endl "\n"
   
void solve(){
	int n; cin >> n;
	int a[n];
	for(auto &x: a) cin >> x;
	if(n==1){
		cout << a[0] << endl;
		return;
	}
	int ans = INT_MAX;
	for(int mask = 1; mask < ((1<<n) - 1); ++mask){
		int pile_1 = 0, pile_2 = 0;
		for(int i = 0; i < n; ++i){
			if(mask & (1<<i)) pile_1 += a[i];
			else pile_2 += a[i];
		}
		ans = min(ans, abs(pile_1-pile_2));
	}
	cout << ans << endl;
}
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    //int _; cin >> _;
    //while(_--)
        solve();
    
    return 0;
}
