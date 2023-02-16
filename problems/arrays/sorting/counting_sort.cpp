#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void counting_sort(int a[], int n){
    // largest element
    int largest=-1;

    for(int i=0;i<n;i++){
        largest=max(largest,a[i]);
    }

    //create a count array/vector
    vector<int> freq(largest+1,0);
    //update the frequency array
    for(int x=0;x<n;x++){
        freq[a[x]]++;
    }

    //put back the elements from frequency array to original array
    int j=0;
    for(int i=0;i<=largest;i++){
        while(freq[i]>0){
            a[j]=i;
            freq[i]--;
            j++;
        }
    }
    return;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);

    int arr[]={21,2,23,4,353,4,324,1,12,0,4,56};
    int n=sizeof(arr)/sizeof(int);

    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    counting_sort(arr,n);
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}