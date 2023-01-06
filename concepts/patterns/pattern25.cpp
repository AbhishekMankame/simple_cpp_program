/* PATTERN
   *
  **
 ***
****
 */

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
        int j=1;
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }

        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}