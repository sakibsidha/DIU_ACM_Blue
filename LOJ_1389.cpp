#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(s[i]=='.'){
            cnt++;
            i+=2;
        }
    }
    cout << cnt << "\n";
}

int main() {
    int tc; cin >> tc;
    for(int i = 1; i <= tc; ++i){
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}
