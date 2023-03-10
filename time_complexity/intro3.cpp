#include<bits/stdc++.h>
using namespace std;
// N < 10^5

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    int n;
    cin>>n;
    int count=0;
    int ct=0;
    while(n>0){
        n=n/2;
        cout<<n<<endl;
        count++;
    }
    // Here time complexity of the loop is O(log(N))
    // O(1) + O(1) + O(log(n)) = O(log(n))
    cout<<count<<endl;  

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            ct++;
        }
    }
    cout<<endl;
    cout<<ct<<endl;

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