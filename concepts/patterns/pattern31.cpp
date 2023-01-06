/* PATTERN

 12345678
  1234567
   123456
    12345
     1234
      123
       12
        1
        
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
     ll i=n;
     while(i>0){
        ll space=n-i+1;
        while(space){
            cout<<" ";
            space--;
        }
        ll j=1;
        ll k=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        cout<<endl;
        i--;
     }
     return 0;
}