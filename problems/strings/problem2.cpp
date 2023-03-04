// Extended version of problem 1 with testcases
#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    char route[1000];
    cin.getline(route, 1000);
    int x=0,y=0;

    for(int i=0;route[i]!='\0';i++){
        switch(route[i]){
            case 'N': y++;
                    break;
            case 'S':y--;
                    break;
            case 'W': x--;
                    break;
            case 'E': x++;
                    break;
        }
    }

    // for North-East
    if(x>=0 and y>=0){
        while(y--){
            cout<<"N";
        }
        while(x--){
            cout<<"E";
        }
    }

    // for South-East
    else if(x>=0 and y<0){
        while(y++){
            cout<<"S";
        }
        while(x--){
            cout<<"E";
        }
    }

    // for North-West
    else if(x<0 and y>=0){
        while(y--){
            cout<<"N";
        }
        while(x++){
            cout<<"W";
        }
    }

    // for South-West
    else if(x<0 and y<0){
        while(y++){
            cout<<"S";
        }
        while(x++){
            cout<<"W";
        }
    }
}

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