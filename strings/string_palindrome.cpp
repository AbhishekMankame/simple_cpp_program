#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    string str;
    cin>>str;
    string str_rev;
    for(int i=str.size()-1;i>=0;--i){
        str_rev.push_back(str[i]);
    }
    if(str==str_rev){
        cout<<"It is a palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }
    return 0;
}