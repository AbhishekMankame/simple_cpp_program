#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=7;
    int *p_x;
    p_x=&x;

    cout<<"x is "<<x<<endl;
    cout<<"&x is "<<&x<<endl;
    cout<<"p_x is "<<p_x<<endl;
    cout<<"*p_x is "<<*p_x<<endl;
    cout<<endl;
    *p_x=8;
    cout<<"x is "<<x<<endl;
    cout<<"&x is "<<&x<<endl;
    cout<<"p_x is "<<p_x<<endl;
    cout<<"*p_x is "<<*p_x<<endl;
    cout<<endl;
    cout<<"Pointer addition"<<endl;
    p_x=p_x+1;
    cout<<"p_x is "<<p_x<<endl;
    cout<<"x is "<<x<<endl;
    cout<<"&x is "<<&x<<endl;
    cout<<"*p_x is "<<*p_x<<endl;
    return 0;
}