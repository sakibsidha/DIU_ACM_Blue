#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(),v.end());
    cout << v[1] << "\n";
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
