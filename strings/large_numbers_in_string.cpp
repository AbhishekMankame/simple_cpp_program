#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    string str;
    cin>>str;
    int last_digit=(int)str[str.size()-1]-'0';
    cout<<last_digit<<endl;
}