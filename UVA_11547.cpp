#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n; cin >> n;
    n *= 567;
    n /= 9;
    n += 7492;
    n *= 235;
    n /= 47;
    n -= 498;
    string s = to_string(n);
    if(s.size()==1) cout << 0 << "\n";
    else if(s[s.size()-2] >= '0' && s[s.size()-2] <= '9') cout << s[s.size()-2] << "\n";
    else cout << 0 << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc; cin >> tc;
    while(tc--)
        solve();

    return 0;
}
