#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);

    int arr[]={21,2,-23,-4,353,4,324,1,-12,0,4,-56};
    int n=sizeof(arr)/sizeof(int);

    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    sort(arr,arr+n,greater<int>());
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    sort(arr,arr+n,less<int>());
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}