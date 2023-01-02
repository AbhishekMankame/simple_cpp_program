/* Pattern
ABCD
ABCD
ABCD
ABCD
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  ll n;
  cin>>n;
  ll i=1;
  while(i<=n)
  {
    ll j=1;
    while(j<=n)
    {
      char ch = ('A'+j-1);
      cout<<ch;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}
