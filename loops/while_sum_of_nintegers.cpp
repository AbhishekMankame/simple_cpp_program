#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    int sum=0;
    int no;
    int i=1;
    while(i<=N)
    {
        //work - read a number from input and add it to the sum
        cin>>no;
        sum=sum+no;

        //update
        i=i+1;
    }
    cout<<sum;
    return 0;
}