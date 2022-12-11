#include<bits/stdc++.h>
using namespace std;

int main(){
    // Given a number N - print it's reverse
    int N;
    cin>>N;
    while(N>0){
        int last_digit=N%10;
        cout<<last_digit;
        N=N/10;
    }

    return 0;
}