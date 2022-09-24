#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum=0;
    int N;
    cin>>N;
    while(N!=0){
        int last_digit=N%10;
        sum=sum+last_digit;
        // UPDATE
        N=N/10;
    }
    cout<<sum;
    return 0;
}