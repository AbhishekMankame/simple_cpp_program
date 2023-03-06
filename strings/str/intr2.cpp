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
    char sentence[1000];
    char largest[1000];
    int largest_len=0;
    cin.get();
    while(n--){
        cin.getline(sentence,1000);
        cout<<sentence<<endl;

        int len=strlen(sentence);
        if(len>largest_len){
            largest_len=len;
            strcpy(largest,sentence);
        }
    }
    cout<<"Largest sentence is "<<sentence<<endl;
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