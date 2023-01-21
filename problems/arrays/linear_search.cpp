#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    int arr[]={10,2,4,534,3,121,455,3};
    int n=sizeof(arr)/sizeof(int);

    int key;
    cin>>key;
    int index=linear_search(arr,n,key);
    if(index!=-1){
        cout<<key<<" is present at index "<<index<<endl;
    }
    else{
        cout<<key<<" is not present"<<endl;
    }
    return 0;
    
}