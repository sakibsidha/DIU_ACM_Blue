#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    for(int t = 1; t <= tc; ++t){
        cout << "Case " << t << ": ";
        vector<long long> v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(),v.end());
        cout << ((v[2]*v[2]==v[0]*v[0]+v[1]*v[1]) ? "yes" : "no") << "\n";
    }
}
