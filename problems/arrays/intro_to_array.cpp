#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

void function1(int arr[]){
    cout<<"In function size of array is "<<sizeof(arr)<<endl;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(int);
    cout<<"In main "<<n<<endl;
    cout<<"Size of array in Main "<<sizeof(a)<<endl;
    function1(a);
    return 0;
}