#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

// Prefex sums
// Time Complexity O(n^2)

int largestSubarraySum(int arr[], int n){
    int prefix[100]={0};
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    int largest_sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int subarraysum = i>0?prefix[j]-prefix[i-1] : prefix[j];
            largest_sum=max(largest_sum,subarraysum);
        }
    }
    return largest_sum;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    freopen("error.txt","w",stderr);
    int arr[]={-2,3,4,-1,5,12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    cout<<largestSubarraySum(arr,n)<<endl;
}