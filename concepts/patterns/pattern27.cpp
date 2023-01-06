/* Pattern 26 for multiple testcases*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);

    ll t=1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll i=n;
        while(i>0){
            ll j=1;
            while(j<=i){
                cout<<"*";
                j++;
            }
            cout<<endl;
            i--;
        }
        cout<<endl;
    }
    return 0;
}