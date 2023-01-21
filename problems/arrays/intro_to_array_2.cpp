#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

// Here in this case we wii get the output as 8, s we need to specify the size of the array
// void function1(int arr[]){
//     cout<<"In function size of array is "<<sizeof(arr)<<endl;
// }

void function2(int arr[], int n){
    cout<<"In function size of array is "<<sizeof(arr)<<endl;
    arr[0]=1000;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(int);
    function2(a,n);
    cout<<"In main "<<n<<endl;
    cout<<"Size of array in Main "<<sizeof(a)<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    
    return 0;
}