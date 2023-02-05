#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int n){
    for(int i=0;i<n;i++){
        int current=arr[i];
        int prev=i-1;

        //loop to find the right index where the element current should be inserted
        while(prev>0 and arr[prev]>current){
            arr[prev+1]=arr[prev];
            prev=prev-1;
        }
        arr[prev+1]=current;
    }
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);

    int arr[]={-3,2,32,23,-43,134,5,53,12,567};
    int n=sizeof(arr)/sizeof(int);
    insertionsort(arr,n);
    for(auto x:arr){
        cout<<x<<",";
    }
}