// Taking input multiple strings

#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    string s;
    int n=5;
    vector<string> sarr;
    string temp;
    while(n--){
        getline(cin,temp);
        sarr.push_back(temp);
    }
    for(string x:sarr){
        cout<<x<<",";
    }

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