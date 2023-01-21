#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);

    int a[]={12,2,34,43,53,655,6,7};
    int n=sizeof(a)/sizeof(int);

    cout<<"Array before reverse"<<endl;

    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Array after reverse"<<endl;
    
    reverseArray(a,n);
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}