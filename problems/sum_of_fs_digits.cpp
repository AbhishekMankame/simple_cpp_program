#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    ll t;
    cin>>t;
    while(t--){
        ll num, rem;
        cin>>num;
        rem=num%10;
        while(num>9){
            num/=10;
        }
        cout<<num+rem<<endl;
    }

    return 0;
}