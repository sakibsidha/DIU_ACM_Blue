/**
 *    author: sakibsidha
 *    created: 15-08-2023 19:23:31
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using vii = vector<pair<int,int>>;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define sz(y) (int) y.size()
#define endl "\n"

void solve(){
	int n; cin >> n;
	int a = n - 1;
	while(a--) cout << "(";
	for(int i = 1; i <= n; ++i){
		int f = 0, k = i, c = 0;
		for(int j = 1; j <= i; ++j){
			cout << "sin(" << j;
			c++;
			if(k > 1){
				if(f==0){
					cout << "-";
					k--; f = 1;
				}
				else{
					cout << "+";
					k--; f = 0;
				}
			}
			else{
				while(c--) cout << ")";
			}
		}
		if(i!=n) cout << "+" << (n-i) + 1 << ")";
		else cout << "+" << (n-i) + 1;
	}
	cout << endl;
}
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	
    //int tt; cin >> tt;
    //while(tt--)
		solve();
    
    return 0;
}
