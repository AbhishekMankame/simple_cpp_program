#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    char numbers[][10]={"one", "two", "three"}; // Here each string represents character array
    cout<<numbers[2][1]<<endl;
    cout<<numbers[1]<<endl;

    // Iteration
    for(int i=0;i<3;i++){
        cout<<numbers[i]<<endl;
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