#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll a[n];
    ll temp=-1;
    ll j=0,x;
    for(int i=0;i<n;++i){
        cin>>x;
        if(x==temp){
            continue;
        }
        else{
            a[j]=x;
            j++;
            temp=x;
        }
    }

    ll q;
    cin>>q;
    while(q--){
        ll k,flag=0;
        cin>>k;
        if(j==1){
            if(k==a[j-1]){
                cout<<"X X"<<endl;
            }
            else if(k>a[j-1]){
                cout<<a[j-1]<<" "<<"X"<<endl;
            }
            else cout << "X" <<" "<<a[j-1]<<endl;
            continue;
        }
        if(k>a[j-1]){
            cout << a[j-1] << " " << "X" << endl;
            continue;
        }
        ll m, l=0, h=j-1;         
        while(l<=h){
            m = (l+h)/2;
            if(k==a[m]){
                if(m==0) cout << "X" << " " << a[m+1] << endl;
                else if(m==j-1) cout << a[m-1] << " " << "X" <<endl;
                else cout <<a[m-1]<<" "<<a[m+1]<<endl;
                flag=1;
                break;
            }
            else if(k<a[m]){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }

        if(flag==0){
            if(a[m]>k){
                if(m==0) cout << "X" << " " << a[m] <<endl;
                else cout << a[m-1] << " " << a[m] <<endl;
                continue;
            }
            else{
                if(m==j-1) cout << a[m] << "X" <<endl;
                else cout << a[m] << " " << a[m+1] << endl;
            }
        }  
    }
    return 0;
}
