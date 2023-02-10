#include<bits/stdc++.h>
using namespace std;
#define ll long long int

// bubble sort
// time complexity - O(NlogN)

void bubblesort(int arr[], int n){
    for(int times=1;times<=n-1;times++){
        //do repeated swapping
        for(int j=0;j<=n-times-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);

    int arr[]={-1,1,23,4,121,42,3,56,54,3,332};
    int n=sizeof(arr)/sizeof(int);
    bubblesort(arr,n);
    for(auto x:arr){
        cout<<x<<",";
    }
    return 0;
}