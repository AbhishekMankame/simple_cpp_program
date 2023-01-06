#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);

    ll n;
    cin>>n;
    int i=n;
    while(i>0){
        ll j=1;
        ll j1=i;
        while(j<=i){
            cout<<j;
            j++;
        }
        int star=n-i;
        int star1=n-i;
        while(star){
            cout<<"*";
            star--;
        }
        while(star1){
            cout<<"*";
            star1--;
        }
        while(j1>0){
            cout<<j1;
            j1--;
        }
        while(j<=i){
            cout<<j;
            j++;
        }


        cout<<endl;
        i--;
    }
}