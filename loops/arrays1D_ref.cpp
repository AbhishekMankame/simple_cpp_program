// Note: arrays are always passed by reference
#include<bits/stdc++.h>
using namespace std;

void func(int a[])
{
    a[0]=5;
}

int main(){
    int a[10];
    a[0]=7;
    cout<<a[0]<<endl;
    func(a);
    cout<<a[0]<<endl;

    return 0;
}