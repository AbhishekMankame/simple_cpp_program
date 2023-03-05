#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    char a[1000]="apple";
    char b[1000];
    cout<<strlen(a)<<endl;

    // strcpy
    strcpy(b,a); 
    cout<<a<<endl;
    cout<<b<<endl;

    // string compare -- strcmp
    cout<<strcmp(a,b)<<endl;

    // string concatenation -- strcat
    char web[]="www.";
    char domain[]="google.com";
    cout<<strcat(web,domain)<<endl;

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