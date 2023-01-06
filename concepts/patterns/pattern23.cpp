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
    int count=1;
    while(i<=n){
        ll j=1;
        while(j<=i){
            char ch='A';
            cout<<ch;
            ch=ch+1;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}