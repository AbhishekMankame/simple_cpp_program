/*
Given T test cases and an array of size N. Print sum of array in each test case.
Constraints: 
1 <= T <= 1000
1 <= N <= 1000
1 <= a[i] <= 1000
*/

#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum=sum+x;
    }
    cout<<sum<<endl;
}
// O(T*N) == O(N^2)

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    
    return 0;
}