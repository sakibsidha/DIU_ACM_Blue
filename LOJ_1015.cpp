#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    for(int t = 1; t <= tc; ++t){
        cout << "Case " << t << ": ";
        int n, sum = 0; cin >> n;
        for(int i = 1; i <= n; ++i){
            int x; cin >> x;
            if(x > 0) sum += x;
        }
        cout << sum << "\n";
    }
}
