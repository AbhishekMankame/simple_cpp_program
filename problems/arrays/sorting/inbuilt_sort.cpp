#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b){
    return a<b;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);

    int arr[]={1,343,4,54,-32,2,-11,443,5,64,43,222};
    int n=sizeof(arr)/sizeof(int);

    cout<<"The elements of array are: ";
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    // sort function
    sort(arr,arr+n);
    cout<<"The array after applying sort function: ";
    for(auto i: arr){
        cout<<i<<" ";
    }
    cout<<endl;

    //reverse function - It is used to reverse the elements of array
    reverse(arr,arr+n);
    cout<<"Elements of array after applying reverse: ";
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    // sort also accepts compartor or function as a parameter

    sort(arr,arr+n,compare);
    cout<<"After applying comparator: ";
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;
}