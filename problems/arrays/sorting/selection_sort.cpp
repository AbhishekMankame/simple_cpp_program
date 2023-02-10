// selection sort
#include<iostream>
using namespace std;

// selection sort
// time complexity O(NlogN)

void selection_sort(int arr[], int n){
    
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif
    int arr[]={10,2,-13,-1,34,54,5,31,64,756,32};
    int n=sizeof(arr)/sizeof(int);
    selection_sort(arr,n);
    for(auto i:arr){
        cout<<i<<",";
    }

}