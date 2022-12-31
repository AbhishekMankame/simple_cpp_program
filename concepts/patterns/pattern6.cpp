#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);

    ll n;
    cin>>n;
    ll i=1;
    while(i<=n){
        ll j=1;
        while(j<=n){
            cout<<i+j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}