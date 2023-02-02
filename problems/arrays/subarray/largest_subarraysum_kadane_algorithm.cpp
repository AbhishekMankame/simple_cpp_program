#include<bits/stdc++.h>
using namespace std;

// Kadane Algorithm
// Time Complexity O(N)

int largestSubarraySum(int arr[],int n){
    int cs=0;
    int ls=0;
    for(int i=0;i<n;i++){
        cs=cs+arr[i];
        if(cs<0){
            cs=0;
        }
        ls=max(ls,cs);
    }
    return ls;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    freopen("error.txt","w",stderr);
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    cout<<largestSubarraySum(arr,n)<<endl;
}