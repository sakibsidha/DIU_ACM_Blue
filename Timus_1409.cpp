/**
 *    author: sakibsidha
 *    created: 27-06-2023 18:58:35
**/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define mp make_pair
#define pb push_back
#define fi first
#define se second
    
void solve(){
    int a,b;
    cin >> a >> b;
    int sum = a+b-1;
    cout << sum-a << " " << sum-b << endl;
}
 
int main(){	
	ios::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
 
    return 0;
}
