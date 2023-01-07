#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);

    ll a;
    ll b;
    int c;
    int d;
    cin>>a>>b;
    cin>>c>>d;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<endl;
    cout<<"Hello World"<<endl;

    cout<<"BINARY AND"<<endl;
    cout<<"a and b = "<< (a&b) <<endl;
    cout<<"c and d = "<< (c&d) <<endl;

    cout<<"--------------------------------------"<<endl;
    cout<<"BINARY OR"<<endl;
    cout<<"a or b = "<< (a|b)<<endl;
    cout<<"c or d = "<< (c|d)<<endl;

    cout<<"---------------------------------------"<<endl;
    cout<<"BINARY NOT"<<endl;
    cout<<" not a = "<<~a<<endl;
    cout<<" not b = "<<~b<<endl;
    cout<<" not c = "<<~c<<endl;
    cout<<" not d = "<<~d<<endl;
    
    return 0;
}