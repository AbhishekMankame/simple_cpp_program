#include<bits/stdc++.h>
using namespace std;

// N < 100000
// a[i] < 100000

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // O(1) + O(1) + O(N) = O(N)

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //a[i]
        }
    }
    // O(!) + O(1) + O(N^2) = O(N^2)
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