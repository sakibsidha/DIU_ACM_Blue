#include <bits/stdc++.h>
using namespace std;

void basicIO() {
      int x, y; cin >> x >> y;
        cout << abs(x-y)*4 + x*4 + 19 << "\n";
}

int main() {
    int tc, t = 0; cin >> tc;
    while(tc--){
        cout << "Case " << ++t << ": ";
        basicIO();
    }
    return 0;
}
