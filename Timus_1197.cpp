#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int kx[] = { -2, -2, -1, -1, 1, 1, 2, 2};
int ky[] = { -1, 1, -2, 2, -2, 2, -1, 1};
int a[12][12]{};

void solve(){
	string s; cin >> s;
	int cnt = 0;
	int r = s[0]-'a'+2, c = s[1]-'0'+1;
	for(int i = 0; i < 12; ++i){
		for(int j = 0; j < 12; ++j){
			if(i==r && j==c){
				for(int k = 0; k < 8; ++k){
					int new_x = kx[k] + i;
					int new_y = ky[k] + j;
					if(!a[new_x][new_y]) cnt++;
				}
				cout << cnt << "\n";
				return;
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	for(int i = 0; i < 12; ++i){
		for(int j = 0; j < 12; ++j){
			if(i==0 || i==1 || i==10 || i==11) a[i][j] = 1;
			else if(j==0 || j==1 || j==10 || j==11) a[i][j] = 1;
		}
	}
	
	int tc; cin >> tc;
	while(tc--)
		solve();

	return 0;
}
