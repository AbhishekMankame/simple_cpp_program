#include<bits/stdc++.h>
using namespace std;

void printAllPairs(int arr[], int n){
    for(int i=0;i<n;i++){
        int x=arr[i];
        for(int j=0;j<n;j++){
            int y=arr[j];
            cout<<x<<","<<y<<endl;
        }
        cout<<endl;
    }
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    printAllPairs(arr,n);
}