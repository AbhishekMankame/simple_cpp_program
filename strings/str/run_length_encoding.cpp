#include<bits/stdc++.h>
using namespace std;

// Run Length Encoding for String Compression
// If compressed string is bigger than original return original string
// Input : aaabbccddee
// Output : a3b2c2d2e2

// Input : abcd
// Output : abcd

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

string compression(string str){
    int n=str.length();
    string output;

    for(int i=0;i<n;i++){
        int count=1;
        while(i<n-1 and str[i+1]==str[i]){
            count++;
            i++;
        }
    }
}

void solve(){
    string s1;
    cout<<compression(s1)<<endl;

    string s2;
    cout<<compression(s2)<<endl;
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