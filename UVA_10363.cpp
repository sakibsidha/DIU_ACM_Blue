#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n = 3;
map<vector<vector<char>>,bool> valids;

bool winX(vector<vector<char>>& v){
	if(v[0][0] == v[0][1] && v[0][0] == v[0][2] && v[0][0] == 'X') return true;
	if(v[1][0] == v[1][1] && v[1][0] == v[1][2] && v[1][0] == 'X') return true;
	if(v[2][0] == v[2][1] && v[2][0] == v[2][2] && v[2][0] == 'X') return true;
	if(v[0][0] == v[1][0] && v[0][0] == v[2][0] && v[0][0] == 'X') return true;
	if(v[0][1] == v[1][1] && v[0][1] == v[2][1] && v[0][1] == 'X') return true;
	if(v[0][2] == v[1][2] && v[0][2] == v[2][2] && v[0][2] == 'X') return true;
	if(v[0][0] == v[1][1] && v[0][0] == v[2][2] && v[0][0] == 'X') return true;
	if(v[0][2] == v[1][1] && v[0][2] == v[2][0] && v[0][2] == 'X') return true;
	return false;
}
bool winO(vector<vector<char>>& v){
	if(v[0][0] == v[0][1] && v[0][0] == v[0][2] && v[0][0] == 'O') return true;
	if(v[1][0] == v[1][1] && v[1][0] == v[1][2] && v[1][0] == 'O') return true;
	if(v[2][0] == v[2][1] && v[2][0] == v[2][2] && v[2][0] == 'O') return true;
	if(v[0][0] == v[1][0] && v[0][0] == v[2][0] && v[0][0] == 'O') return true;
	if(v[0][1] == v[1][1] && v[0][1] == v[2][1] && v[0][1] == 'O') return true;
	if(v[0][2] == v[1][2] && v[0][2] == v[2][2] && v[0][2] == 'O') return true;
	if(v[0][0] == v[1][1] && v[0][0] == v[2][2] && v[0][0] == 'O') return true;
	if(v[0][2] == v[1][1] && v[0][2] == v[2][0] && v[0][2] == 'O') return true;
	return false;
}
ll cnt = 0;
void BT(vector<vector<char>>& v, int last){
	bool f1 = winO(v), f2 = winX(v);
	if(f1 || f2){
		if(f1 && f2) return;
		else{
			valids[v] = true;
			return;
		}
	}
	valids[v] = true;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if(v[i][j] == '.'){
				if(last == 1){
					v[i][j] = 'O';
					BT(v, 2);
					v[i][j] = '.';
				}
				else{
					v[i][j] = 'X';
					BT(v, 1);
					v[i][j] = '.';
				}
			}
		}
	}
}

void solve(){
	vector<vector<char>> a (n, vector<char>(n));
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cin >> a[i][j];
		}
	}
	if(valids[a] == true) cout << "yes" << "\n";
	else cout << "no" << "\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	vector<vector<char>> board (n, vector<char>(n));
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			board[i][j] = '.';
		}
	}
	BT(board, 0);
	int tc; cin >> tc;
	while(tc--)
		solve();

	return 0;
}
