#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    char sentence[1000];
    char temp=cin.get();

    //cout<<temp;

    int len=1;
    while(temp!='\n'){
        len++;
        cout<<temp;

        // Update the value of temp
        temp=cin.get();

    }

    return 0;
}