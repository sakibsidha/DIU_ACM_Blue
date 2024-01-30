/**
 *    author: sakibsidha
 *    created: 24-07-2023 19:25:49
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define fi first
#define se second
#define endl "\n" 
 
 
void solve(){
	ll n, c;
	cin >> n >> c;
	vector<ll> v(n);
	for(int i = 0; i < n; ++i)
		cin >> v[i];
	sort(v.begin(),v.end());
	//ttttttffff
	auto possible = [&](ll mid){
		ll cnt = 1;
		ll lp = 0;
		for(ll i = 1; i < n; ++i){
			if(v[i]-v[lp] >= mid){
				cnt++;
				lp = i;
			}
		}
		return (cnt>=c);
	};
	
	ll l = 0, r = 1e9;
	ll ans;
	while(l<=r){
		ll mid = l + (r-l)/2;
		if(possible(mid)){
			ans = mid;
			l = mid + 1;
		} else r = mid - 1;
	}
	cout << ans << endl;
}
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int _; cin >> _;
    while(_--)
        solve();
    
    return 0;
}
