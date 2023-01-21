#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end =mid-1;
        }
        else {
            start = mid+1;
        }
    }
    return -1;
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    int arr[]={1,2,10,15,20,40,45};
    int n=sizeof(arr)/sizeof(int);

    int key;
    cin>>key;
    int index=binary_search(arr,n,key);
    if(index!=-1){
        cout<<key<<" is present at index "<<index<<endl;
    }
    else{
        cout<<key<<" is not present"<<endl;
    }
    return 0;
    
}