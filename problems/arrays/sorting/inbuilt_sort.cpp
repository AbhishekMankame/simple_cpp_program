#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);

    int arr[]={1,343,4,54,-32,2,-11,443,5,64,43,222};
    int n=sizeof(arr)/sizeof(int);

    for(auto i:arr){
        cout<<"The elements of array are: "<<i<<" ";
    }
    cout<<endl;

    // sort function
    sort(arr,arr+n);
    for(auto i: arr){
        cout<<"The array after applying sort function: "<<i<<" ";
    }
    cout<<endl;

    return 0;
}