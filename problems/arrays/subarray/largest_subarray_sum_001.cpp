#include<bits/stdc++.h>
using namespace std;

void printAllPairs(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<j;k++){
                sum=sum+arr[k];
            }
            cout<<sum;
            cout<<endl;
        }
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