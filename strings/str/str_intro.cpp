#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    string s="hello world"; // Dynamic array
    cout<<s<<endl;

    string s2("This is Abhishek!!!");
    cout<<s2<<endl;

    string s3;
    getline(cin,s3);
    cout<<s3<<endl;

    //using ending parameter
    string s4;
    getline(cin,s4,'.');
    cout<<s4<<endl;

}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    solve();

    
    return 0;
}