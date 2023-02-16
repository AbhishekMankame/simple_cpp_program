#include<iostream>
#include<cstring>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif
    char a[]="abcdefgh";
    cout<<a<<endl;
    //strlen() function returns the length of the string
    cout<<"Length of the string: "<<strlen(a)<<endl; // number of visible characters
    cout<<sizeof(a)<<endl;

    return 0;
}