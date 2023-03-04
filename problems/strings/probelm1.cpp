// Find Displacement: Given a long route containing N,S,E,W directions, find the shortest path to reach the location.

// Sample Input: SNNNEWE

// Sample Output: NNE

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