#include <bits/stdc++.h>
using namespace std;


int main() {
   // write your code here 
   int n;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       for(int s=1;s<=n-i;s++)
       {
           cout<<" ";
       }
       for(int a=1;a<=i;a++)
       {
           cout<<a;
       }
       cout<<endl;
    }
    return 0;
}