#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);

    int n;
    cin>>n;
    int a=0;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        a=a^t;
    }
    cout<<a<<endl;
}